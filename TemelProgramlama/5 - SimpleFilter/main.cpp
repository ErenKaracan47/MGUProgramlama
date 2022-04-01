#include <cmath>
#include "lib/wave.h"

int main(){

    int sampleRate = 44100;
    float duration = 1.0f;
    
    wave sine(sampleRate, duration);
    wave filtered(sampleRate, duration);

    for (int i = 0; i < sine.sampleTotal; i++)
    {
        float time = (float)i / (float)sine.sampleRate;
        sine.samples[i] = sinf(2.0f * PI * (time * ((float)sampleRate / 4.0f)) * time);
    }

    //-------------------------------------

    for (int i = 0; i < sine.sampleTotal; i++)
    {
        if (i == 0){
            filtered.samples[i] = sine.samples[i];
        }
        else{
            filtered.samples[i] = sine.samples[i] + sine.samples[i - 1];
        }
    }
    
    //-------------------------------------
    
    filtered.writeBuffertoFile("beni.ciz");

    return 0;
}