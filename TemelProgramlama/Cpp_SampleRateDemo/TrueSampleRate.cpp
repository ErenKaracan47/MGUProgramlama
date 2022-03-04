#include "TrueSampleRate.h"

TrueSampleRate::TrueSampleRate(int _sampleRate)
{
    sampleRate = _sampleRate;
    samples = new float(sampleRate);
}

TrueSampleRate::~TrueSampleRate()
{
    delete[] samples;
}

void TrueSampleRate::fillSine()
{
    for (int i = 0; i < sampleRate; i++)
    {
        samples[i] = sin((frequency) * (2*PI) * ((float)i / sampleRate));
    }
}

void TrueSampleRate::writeBuffertoFile(std::string _filename)
{

    std::ofstream BufferFile(_filename);

    
    for (int i = 0; i < sampleRate; i++)
    {
        BufferFile << samples[i] << std::endl;
    }
    
    BufferFile.close();

}

