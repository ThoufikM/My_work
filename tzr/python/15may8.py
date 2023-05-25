n = int(input("ENTER THR VALUES:"))
ans = 0
while(n>0):
    m = n % 10
    ans = ans*10+m
    n = n // 10
print("REVERSE NUMBER IS:",ans)    
