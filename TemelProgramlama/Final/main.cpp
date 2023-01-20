#include <cmath>
#include <random>
#include "lib/wave.h"

int main(){

    const float sampleRate = 44100.0f;
    const float duration = 1.0f;
    
    wave gorsellestirici(sampleRate, duration);

    /* main icerisine yerlestirmek istediginiz kodu bu alanin altina yazin */

    // sinyalinizi olusturmak icin kullanacaginiz array'in ismi "sinyal" olmalidir
    // ve yukarida belirtilen sampleRate ve duration'a gore boyutu degisebilmelidir

    

    /* main icerisine yerlestirmek istediginiz kodu bu alanin ustune yazin */

    for (int i = 0; i < gorsellestirici.sampleTotal; i++)
    {
        gorsellestirici.samples[i] = sinyal[i];
    }
    
    gorsellestirici.plot();

    return 0;
}