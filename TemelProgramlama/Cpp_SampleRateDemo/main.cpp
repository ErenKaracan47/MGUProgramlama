#include "SampleRateDemo.h"

int main(){

    
    int sampleRate = 200;
    int frequency = 1;
    
    SampleRateDemo demo(sampleRate);
    demo.frequency = frequency;
    demo.fillSine();
    demo.writeBuffertoFile();

    return 0;
}