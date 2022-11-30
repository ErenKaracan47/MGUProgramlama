#include <cmath>
#include <fstream>
#include <vector>
#include "plot.h"

# define PI           3.14159265358979323846

class wave
{
private:
    /* data */
public:
    wave(int _sampleRate, float _duration);
    ~wave();

    void plot();
    void fillSine();
    void writeBuffertoFile(std::string _filename);

    int sampleRate;
    int sampleTotal;
    int frequency;
    float duration;
    std::vector<float> time;
    std::vector<float> samples;
    signalsmith::plot::Plot2D plotter = signalsmith::plot::Plot2D(480, 320);
};