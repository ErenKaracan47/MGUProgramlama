import random
import matplotlib.pyplot as plt
import math

samplerate = 200
frequency = 1
time = []
sine = []
white = []

for i in range(samplerate):
    time.append(i/samplerate)
    sine.append(math.sin((2*math.pi*frequency*time[i]) + (math.pi/2)))

for i in range(samplerate):
    white.append((random.random() * 2) - 1)

plt.ylim(-1.0, 1.0)
plt.plot(time, sine)
plt.plot(time, white)

plt.show()

