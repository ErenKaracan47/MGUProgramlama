import matplotlib.pyplot as plt

with open("SampleBuffer.temelprogramlamaornek", "r") as f:
    
    
    readsamples = f.readlines()
    samples = []
    
    for sample in readsamples:
        samples.append(float(sample))



plt.plot(samples)
plt.show()