import math
import matplotlib.pyplot as plt

samplerate = 44100

square_wave = [0] * samplerate

###########################
for i in range(samplerate):
    square_wave[i] = 0

###########################

plt.plot(square_wave)
plt.show()
