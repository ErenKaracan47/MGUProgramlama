import math
import matplotlib.pyplot as plt

samplerate = 44100
duration = 1.0
total_num_of_samples = int(samplerate * duration)
amplitude = 1.0
coefficients = [-0.000716, -0.010806, -0.010580, 0.078926, 0.260783, 0.362812, 0.260783, 0.078926, -0.010580, -0.010806, -0.000716]

time = []
sinewave = []
filtered = [0] * total_num_of_samples

for i in range(total_num_of_samples):
    time.append(i / samplerate)
    sinewave.append(math.sin(2 * math.pi * (time[i] * (samplerate / 4)) * time[i]) * amplitude)

#########################################

for i in range(total_num_of_samples):
    if i < len(coefficients):
        filtered[i] = sinewave[i]
    else: 
        filtered[i] = sinewave[i - 0] * coefficients[0]
        filtered[i] += sinewave[i - 1] * coefficients[1]
        filtered[i] += sinewave[i - 2] * coefficients[2]
        filtered[i] += sinewave[i - 3] * coefficients[3]
        filtered[i] += sinewave[i - 4] * coefficients[4]
        filtered[i] += sinewave[i - 5] * coefficients[5]
        filtered[i] += sinewave[i - 6] * coefficients[6]
        filtered[i] += sinewave[i - 7] * coefficients[7]
        filtered[i] += sinewave[i - 8] * coefficients[8]
        filtered[i] += sinewave[i - 9] * coefficients[9]
        filtered[i] += sinewave[i - 10] * coefficients[10]

#########################################

# plt.ylim(-2, 2)
plt.plot(time, filtered)
plt.show()