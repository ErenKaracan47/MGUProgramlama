import math
import matplotlib.pyplot as plt

samplerate = 44100
frequency = 40
duration = 1.0
total_num_of_samples = int(samplerate * duration)

amplitude_start = 0.0
amplitude_target = 1.0

sinewave = []

for i in range(total_num_of_samples):
    weight = i / total_num_of_samples
    amplitude_current = (amplitude_start * (1.0 - weight)) + (amplitude_target * weight)
    time = i / samplerate
    sinewave.append(amplitude_current * math.sin(2 * math.pi * frequency * time))

####################################

threshold = 0.5
ratio = 2

for i in range(total_num_of_samples):
    sinewave[i] = sinewave[i]

####################################

plt.plot(sinewave)
plt.show()
