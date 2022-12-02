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
        signal.samples[i] = 0;
    }

    /* kodunuzu bu alanin ustune yazin */
    
    signal.plot();

    return 0;
}