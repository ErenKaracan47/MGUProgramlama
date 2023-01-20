#include "wave.h"

wave::wave(int _sampleRate, float _duration)
{
    sampleRate = _sampleRate;
    duration = _duration;
    sampleTotal = (int)((float)sampleRate * duration);
    samples.resize(sampleTotal);
    time.resize(sampleTotal);
    for (size_t i = 0; i < sampleTotal; i++)
    {
        time[i] = (float)i / (float)sampleRate;
    }
    
}

wave::~wave()
{
}

void wave::fillSine()
{
    for (int i = 0; i < sampleRate; i++)
    {
        samples[i] = sin((frequency) * (2*PI) * ((float)i / sampleRate));
    }
}

void wave::plot()
{
    plotter.x.major(0).tick(duration).label("time");
    plotter.y.major(0).minors(-1, 1).label("signal");
    auto& line = plotter.line();
    for (size_t i = 0; i < sampleTotal; i++)
    {
        line.add(time[i], samples[i]);
    }
    plotter.write("plot.svg");
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

