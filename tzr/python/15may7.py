n = int(input("ENTER THE VALUE:"))
s = 0
while(n>0):
    m = n % 10
    s = s + m
    n = n//10
print("sum of digits is",s)
