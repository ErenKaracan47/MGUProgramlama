#include <cmath>
#include <fstream>

# define PI           3.14159265358979323846

class TrueSampleRate
{
private:
    /* data */
public:
    TrueSampleRate(int _sampleRate);
    int sampleRate;
    int frequency;
    float* samples;
    ~TrueSampleRate();

    void fillSine();
    void writeBuffertoFile(std::string _filename);
};

