cmake_minimum_required(VERSION 3.24)

project(AUDIO_PLUGIN)

set(SRC_DIR "${PROJECT_SOURCE_DIR}/Source")
set(JUCE_DIR "${PROJECT_SOURCE_DIR}/JUCE")

add_subdirectory(${JUCE_DIR})

juce_add_plugin(AudioPlugin
    VERSION 0.0.1                               # Set this if the plugin version is different to the project version
    # ICON_BIG ...                              # ICON_* arguments specify a path to an image file to use as an icon for the Standalone
    # ICON_SMALL ...
    COMPANY_NAME MGU                            # Specify the name of the plugin's author
    IS_SYNTH FALSE                              # Is this a synth or an effect? TRUE/FALSE
    NEEDS_MIDI_INPUT FALSE                      # Does the plugin need midi input? TRUE/FALSE
    NEEDS_MIDI_OUTPUT FALSE                     # Does the plugin need midi output? TRUE/FALSE
    IS_MIDI_EFFECT FALSE                        # Is this plugin a MIDI effect? TRUE/FALSE
    EDITOR_WANTS_KEYBOARD_FOCUS FALSE           # Does the editor need keyboard focus? TRUE/FALSE 
    COPY_PLUGIN_AFTER_BUILD TRUE                # Should the plugin be installed to a default location after building? TRUE/FALSE
    PLUGIN_MANUFACTURER_CODE MguP               # A four-character manufacturer id with at least one upper-case character
    PLUGIN_CODE Fina                            # A unique four-character plugin id with exactly one upper-case character
                                                # GarageBand 10.3 requires the first letter to be upper-case, and the remaining letters to be lower-case
    FORMATS AU VST3 Standalone                  # The formats to build. Other valid formats are: AAX Unity VST AU AUv3
    PRODUCT_NAME "MGUFinal"                     # The name of the final executable, which can differ from the target name
    MICROPHONE_PERMISSION_ENABLED TRUE
)

juce_generate_juce_header(AudioPlugin)

target_sources(AudioPlugin
    PRIVATE
        ${SRC_DIR}/Main.cpp
)

target_compile_definitions(AudioPlugin
    PUBLIC
        # JUCE_WEB_BROWSER and JUCE_USE_CURL would be on by default, but you might not need them.
        JUCE_WEB_BROWSER=0  # If you remove this, add `NEEDS_WEB_BROWSER TRUE` to the `juce_add_plugin` call
        JUCE_USE_CURL=0     # If you remove this, add `NEEDS_CURL TRUE` to the `juce_add_plugin` call
        JUCE_VST3_CAN_REPLACE_VST2=0)

target_link_libraries(AudioPlugin
    PRIVATE
        # AudioPluginData           # If we'd created a binary data target, we'd link to it here
        juce::juce_audio_utils
    PUBLIC
        juce::juce_recommended_config_flags
        juce::juce_recommended_lto_flags
        juce::juce_recommended_warning_flags)