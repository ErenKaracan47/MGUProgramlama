import math
import matplotlib.pyplot as plt

samplerate = 44100

pulse_wave = [0] * samplerate
width = 0.5

###########################
for i in range(samplerate):
    pulse_wave[i] = 0

###########################

plt.plot(pulse_wave)
plt.show()
