n = int(input("ENTER THE VALUE:"))
s = 0
for i in range(1,n):
    if n%i==0:
        print(i,end=" ")
        s +=i
if s == n:
    print("this is a perfact number")
else:
    print("not perfact number")
    
