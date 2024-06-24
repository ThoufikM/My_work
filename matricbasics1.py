import numpy as np

r = np.array([[50,60,25],[10,13,70],[40,70,52]])
e = np.array([20,30,15])

p = r * e
print(p)
print(np.dot(r,e)) 

r = np.array([[50,60,25],[10,13,70],[40,70,52]])
e = np.array([75,75,75])

p = r * e
print(p)
print(np.dot(r,e)) 
