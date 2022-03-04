import math
import matplotlib.pyplot as plt

samplerate = 200
frequency = 1
amplitude = 1.0

time = []
sinewave = []

for i in range(samplerate):
    time.append(i / samplerate)
    sinewave.append(math.sin(2 * math.pi * frequency * time[i]) * amplitude)

plt.ylim(-1, 1)
plt.plot(time, sinewave)
plt.show()