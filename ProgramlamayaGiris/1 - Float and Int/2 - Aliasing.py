import math
import matplotlib.pyplot as plt

samplerate = 200
frequency = 1
amplitude = 1.0

time = []
sinewave = []

over_samplerate = 400

over_sinewave = []
over_time = []

for i in range(samplerate):
    time.append(i / samplerate)
    sinewave.append(math.sin(2 * math.pi * frequency * time[i]) * amplitude)

for i in range(over_samplerate):
    over_time.append(i / over_samplerate)
    over_sinewave.append(math.sin(2 * math.pi * frequency * over_time[i]) * amplitude)

plt.ylim(-1, 1)
plt.plot(time, sinewave, 'ro')
plt.plot(over_time, over_sinewave)
plt.show()