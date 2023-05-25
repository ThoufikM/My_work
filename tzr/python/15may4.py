n=str(input("ENTER THE STRING:"))
v = 0
c = 0
for i in n:
    if i in "aeiou":
        v+=1
    else:
        c+=1
print("vowels count:",v)
print("consonenats count:",c)


