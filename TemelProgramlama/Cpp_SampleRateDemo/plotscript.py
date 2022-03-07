import matplotlib.pyplot as plt

with open("SampleBuffer.temelprogornek", "r") as f:
    readsamples = f.readlines()
    samplerate = float(readsamples[0])
    time = []
    samples = []
    for t, sample in enumerate(readsamples[1:]):
        time.append(t / samplerate)
        samples.append(float(sample))

plt.plot(time, samples)
plt.show()