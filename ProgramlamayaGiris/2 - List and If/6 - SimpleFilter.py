import math
import matplotlib.pyplot as plt

samplerate = 44100
duration = 1.0
total_num_of_samples = int(samplerate * duration)
amplitude = 1.0

time = []
sinewave = []
filtered = [0] * total_num_of_samples

for i in range(total_num_of_samples):
    time.append(i / samplerate)
    sinewave.append(math.sin(2 * math.pi * (time[i] * (samplerate / 4)) * time[i]) * amplitude)

#########################################

for i in range(total_num_of_samples):
    filtered[i] = sinewave[i]

#########################################

# plt.ylim(-2, 2)
plt.plot(time, filtered)
plt.show()