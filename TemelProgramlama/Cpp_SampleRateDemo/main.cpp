#include "SampleRateDemo.h"

int main(){

    
    int sampleRate = 200;
    int frequency = 99;
    
    SampleRateDemo demo(sampleRate);
    demo.frequency = frequency;
    demo.fillSine();
    demo.writeBuffertoFile(sampleRate, "SampleBuffer.temelprogornek");

    int trueSampleRate = 1000;

    SampleRateDemo truesr(trueSampleRate);
    truesr.frequency = frequency;
    truesr.fillSine();
    truesr.writeBuffertoFile(sampleRate, "TrueSampledBuffer.temelprogornek");

    return 0;
}