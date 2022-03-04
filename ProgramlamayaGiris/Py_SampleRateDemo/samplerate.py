from random import random
import matplotlib.pyplot as plt
import math




samplerate = 200
frequency = 99
time = []
sine = []
white = []

# true_samplerate = 1000
# true_sine = []
# true_time = []

# for i in range(true_samplerate):
#     true_time.append(i/true_samplerate)
#     true_sine.append(math.sin(2*math.pi*frequency*true_time[i]))




for i in range(samplerate):
    
    time.append(i/samplerate)
    sine.append(math.sin((2*math.pi*frequency*time[i]) + (math.pi/2)))

for i in range(samplerate):

    white.append((random()*2) - 1)

plt.ylim(-1.0, 1.0)
plt.plot(time, sine)
plt.plot(time, white)
# plt.plot(true_time, true_sine)

plt.show()

