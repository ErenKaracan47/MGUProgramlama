#include "wave.h"

wave::wave(int _sampleRate, float _duration)
{
    sampleRate = _sampleRate;
    duration = _duration;
    sampleTotal = (int)((float)sampleRate * duration);
    samples = new float[sampleTotal];
}

wave::~wave()
{
    delete[] samples;
}

void wave::fillSine()
{
    for (int i = 0; i < sampleRate; i++)
    {
        samples[i] = sin((frequency) * (2*PI) * ((float)i / sampleRate));
    }
}

void wave::writeBuffertoFile(std::string _filename)
{

    std::ofstream BufferFile(_filename);

    BufferFile << sampleRate << std::endl;

    for (int i = 0; i < sampleTotal; i++)
    {
        BufferFile << samples[i] << std::endl;
    }
    
    BufferFile.close();

}

