#include <cmath>
#include <fstream>

# define PI           3.14159265358979323846

class SampleRateDemo
{
private:
    /* data */
public:
    SampleRateDemo(int _sampleRate);
    int sampleRate;
    int frequency;
    float* samples;
    ~SampleRateDemo();

    void fillSine();
    void writeBuffertoFile();
};

