#include <cmath>
#include "lib/wave.h"

int main(){

    int sampleRate = 44100;
    float duration = 1.0f;
    int frequency = 440;

    float amplitude_start = 0.0;
    float amplitude_target = 1.0;
    
    wave sine(sampleRate, duration);

    for (int i = 0; i < sine.sampleTotal; i++)
    {
        float weight = (float)i / (float)sine.sampleTotal;
        float amplitude_current = (amplitude_start * (1.0f - weight)) + (amplitude_target * weight);
        float time = (float)i / (float)sine.sampleRate;
        sine.samples[i] = amplitude_current * sinf(2.0f * PI * (float)frequency * time);
    }

    //-------------------------------------

    float threshold = 0.5f;
    float ratio = 2.0f;

    for (int i = 0; i < sine.sampleTotal; i++)
    {
        sine.samples[i] = sine.samples[i];
    }
    
    //-------------------------------------
    
    sine.writeBuffertoFile("beni.ciz");

    return 0;
}