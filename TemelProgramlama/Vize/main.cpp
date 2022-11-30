#include <cmath>
#include <random>
#include "lib/wave.h"

int main(){

    float sampleRate = 44100.0f;
    float duration = 1.0f;
    float frequency = 10.0f;
    
    wave signal(sampleRate, duration);

    /* kodunuzu bu alanin altina yazin */
    
    for (int i = 0; i < signal.sampleTotal; i++)
    {
        // Generate sawtooth wave with variable frequency
        signal.samples[i] = (i % (int)(sampleRate / frequency)) / (sampleRate / frequency) * 2 - 1;
    }

    /* kodunuzu bu alanin ustune yazin */
    
    signal.plot();

    return 0;
}