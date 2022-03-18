#include "lib/wave.h"

int main(){

    int sampleRate = 44100;
    float duration = 1.0f;
    float width = 0.5;
    
    wave pulse(sampleRate, duration);

    for (int i = 0; i < pulse.sampleTotal; i++)
    {
        pulse.samples[i] = 0;
    }
    
    pulse.writeBuffertoFile("beni.ciz");

    return 0;
}