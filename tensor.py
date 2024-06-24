import tensorflow as tf
from tensorflow import keras
import matplotlib.pyplot as plt
import numpy as np

(x_train,y_train),(x_test,y_test) = keras.datasets.mnist.load_data()

print(len(x_train))
print(len(x_test))

print(plt.matshow(x_train[0]))
print(x_train[0])
print(y_train[0])
print(x_train.shape)

x_train = x_train / 255
x_test = x_test / 255

x_train_faltten = x_train.reshape(len(x_train),28*28)
x_test_faltten = x_test.reshape(len(x_test),28*28)

print(x_train_faltten.shape)
print(x_train_faltten[0])
print(x_test_faltten.shape)

model = keras.Sequential([
	keras.layers.Dense(10, input_shape = (784,),activation = 'sigmoid')
])

model.compile(optimizer = 'adam',
		    loss = 'sparse_categorical_crossentropy',
		    metrics =['accuracy'] )

model.fit(x_train_faltten,y_train,epochs = 5)

model.evaluate(x_test_faltten,y_test)

y_perdict = model.predict(x_test_faltten)
print(y_perdict[0])

A = np.argmax(y_perdict[0])
print(A)