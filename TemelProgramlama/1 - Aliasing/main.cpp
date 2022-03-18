#include "lib/wave.h"

int main(){

    float duration = 1.0f;
    int sampleRate = 200;
    int frequency = 99;
    
    wave undersr(sampleRate, duration);
    undersr.frequency = frequency;
    undersr.fillSine();
    undersr.writeBuffertoFile("beni.ciz");

    int trueSampleRate = 1000;

    wave truesr(trueSampleRate, duration);
    truesr.frequency = frequency;
    truesr.fillSine();
    truesr.writeBuffertoFile("beni.cizme");

    return 0;
}