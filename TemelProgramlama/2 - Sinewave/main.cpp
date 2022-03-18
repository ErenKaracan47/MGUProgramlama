#include <cmath>
#include "lib/wave.h"

int main(){

    int sampleRate = 44100;
    float duration = 1.0f;
    int frequency = 440;
    
    wave sine(sampleRate, duration);

    for (int i = 0; i < sine.sampleTotal; i++)
    {
        sine.samples[i] = 0;
    }
    
    sine.writeBuffertoFile("beni.ciz");

    return 0;
}