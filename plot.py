
import numpy as np
import matplotlib.pyplot as plt

datos = np.loadtxt("datos.dat")


x=datos[:,1]
y=datos[:,2]
plt.figure(figsize=(4,4))

plt.plot(x,y)
plt.xlabel("x")
plt.ylabel("y")

plt.savefig("CalderonNathalia_final_15.pdf")