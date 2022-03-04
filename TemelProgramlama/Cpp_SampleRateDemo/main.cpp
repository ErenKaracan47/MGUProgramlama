#include "SampleRateDemo.h"
#include "TrueSampleRate.h"

int main(){

    
    int sampleRate = 200;
    int frequency = 1;
    
    SampleRateDemo demo(sampleRate);
    demo.frequency = frequency;
    demo.fillSine();
    demo.writeBuffertoFile("SampleBuffer.temelprogornek");

    int trueSampleRate = 1000;

    TrueSampleRate truesr(trueSampleRate);
    truesr.frequency = frequency;
    truesr.fillSine();
    truesr.writeBuffertoFile("TrueSampledBuffer.temelprogornek");

    return 0;
}