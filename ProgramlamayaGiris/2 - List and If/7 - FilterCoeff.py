import math
import matplotlib.pyplot as plt

samplerate = 44100
duration = 1.0
total_num_of_samples = int(samplerate * duration)
amplitude = 1.0
filter = [-0.000716, -0.010806, -0.010580, 0.078926, 0.260783, 0.362812, 0.260783, 0.078926, -0.010580, -0.010806, -0.000716]

time = []
sinewave = []
filtered = [0] * total_num_of_samples

for i in range(total_num_of_samples):
    time.append(i / samplerate)
    sinewave.append(math.sin(2 * math.pi * (time[i] * (samplerate / 4)) * time[i]) * amplitude)

#########################################

for i in range(total_num_of_samples):
    if i < len(filter):
        filtered[i] = sinewave[i]
    else:
        filtered[i] += sinewave[i - 0] * filter[0]
        filtered[i] += sinewave[i - 1] * filter[1]
        filtered[i] += sinewave[i - 2] * filter[2]
        filtered[i] += sinewave[i - 3] * filter[3]
        filtered[i] += sinewave[i - 4] * filter[4]
        filtered[i] += sinewave[i - 5] * filter[5]
        filtered[i] += sinewave[i - 6] * filter[6]
        filtered[i] += sinewave[i - 7] * filter[7]
        filtered[i] += sinewave[i - 8] * filter[8]
        filtered[i] += sinewave[i - 9] * filter[9]
        filtered[i] += sinewave[i - 10] * filter[10]

#########################################

# plt.ylim(-2, 2)
plt.plot(time, filtered)
plt.show()