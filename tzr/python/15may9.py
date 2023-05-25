n = int(input("ENTER THR VALUES:"))
ans = 0
th = 0
th = n
while(n>0):
    m = n % 10
    ans = ans*10+m
    n = n // 10
print("REVERSE NUMBER IS:",ans)    
if ans == th:
    print("PALINDROME")
else:
    print("NOT PALINDROME")
