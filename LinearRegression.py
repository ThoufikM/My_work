import pandas as pd
import numpy as np
from sklearn import linear_model
import math

df = pd.read_csv("hiring.csv")
print(df)

Z = 0

df.experience = df.experience.fillna(Z)
print(df)

test_score = math.floor(df['test_score(out of 10)'].mean())
print("test_score:",test_score)

df['test_score(out of 10)'] = df['test_score(out of 10)'].fillna(test_score)
print(df)

linear = linear_model.LinearRegression()
print(linear.fit(df[['experience','test_score(out of 10)','interview_score(out of 10)']],df['salary($)']))

print(linear.predict([[2,9,6]]))

print(linear.predict([[0,8,9]]))

print(linear.predict([[11.0,7.0,8.0]]))