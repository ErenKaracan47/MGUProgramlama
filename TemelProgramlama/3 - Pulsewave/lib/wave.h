#include <cmath>
#include <fstream>

# define PI           3.14159265358979323846

class wave
{
private:
    /* data */
public:
    wave(int _sampleRate, float _duration);
    int sampleRate;
    int sampleTotal;
    int frequency;
    float duration;
    float* samples;
    ~wave();

    void fillSine();
    void writeBuffertoFile(std::string _filename);
};

