 
import numpy as np

# Tensors
data = [[1,2],[3,4]]
data1 = torch.tensor(data)
print("Tensors:",data)

# From a Numpy 
np_array = np.array(data)
x_np =torch.from_numpy(np_array)
print(x_np)

#create ones array
O = torch.ones(5,5),
print(O)

#crate a zeros array
Z = torch.zeros(4,4,)
print(Z)

#ones array
x_ones = torch.ones_like(data1)
print(x_ones)

#randam array
x_rand = torch.rand_like(data1,dtype = torch.float)
print(x_rand)

#shape to implement all array
shape = (2,3,)
rand_shape = torch.rand(shape)
print(rand_shape)
zeros_shape = torch.zeros(shape)
print(zeros_shape)
ones_shape = torch.ones(shape)
print(ones_shape)

#atributes
print(ones_shape.shape)
print(ones_shape.dtype)
print(ones_shape.device)

#slicing
T = torch.rand(4,4)
print(T)
print("First row:",T[0])
print("First Column:",T[:,0])
print("Last column:",T[:,-1])

#change column
T[:,1] = 0
print(T)

#concat
T1 = torch.cat([T,T],dim = 1)
print(T1) 

#arithmatic operations
Y1 = x_np * x_np 
print(Y1)

Y2 = x_np.sum()
print(Y2)

Y3 = Y2.item()
print(Y3,type(Y3))

A = x_np.add(6)
print(A)

T = torch.ones(5)
print(T)

#Tensor to numpy
N = T.numpy()
print(N)

#numpy to tensors
N = np.ones(4)
T = torch.from_numpy(N)
print(N)
print(T)



