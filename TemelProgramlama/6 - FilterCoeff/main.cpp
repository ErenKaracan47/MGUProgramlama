#include <cmath>
#include "lib/wave.h"

int main(){

    int sampleRate = 44100;
    float duration = 1.0f;
    
    int coefficient_length = 11;
    float coefficients[] = {-0.000716, -0.010806, -0.010580, 0.078926, 0.260783, 0.362812, 0.260783, 0.078926, -0.010580, -0.010806, -0.000716};

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
        if (i < coefficient_length){
            filtered.samples[i] = sine.samples[i];
        }
        else{
            filtered.samples[i] = sine.samples[i - 0] * coefficients[0];
            filtered.samples[i] += sine.samples[i - 1] * coefficients[1];
            filtered.samples[i] += sine.samples[i - 2] * coefficients[2];
            filtered.samples[i] += sine.samples[i - 3] * coefficients[3];
            filtered.samples[i] += sine.samples[i - 4] * coefficients[4];
            filtered.samples[i] += sine.samples[i - 5] * coefficients[5];
            filtered.samples[i] += sine.samples[i - 6] * coefficients[6];
            filtered.samples[i] += sine.samples[i - 7] * coefficients[7];
            filtered.samples[i] += sine.samples[i - 8] * coefficients[8];
            filtered.samples[i] += sine.samples[i - 9] * coefficients[9];
            filtered.samples[i] += sine.samples[i - 10] * coefficients[10];
        }
    }
    
    //-------------------------------------
    
    filtered.writeBuffertoFile("beni.ciz");

    return 0;
}