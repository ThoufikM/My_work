class inher:
    def __init__(t,n,a,h):
        t.name = n
        t.age = a
        t.height = h

class inher1(inher):
    def __init__(t,n,a,h,w):
        inher.__init__(t,n,a,h)
        t.weight = w

t2 = inher1("THOUFIK",20,140,69)


print("NAME:",t2.name)
print("AGE:",t2.age)
print("HEIGHT:",t2.age)
print("WEIGHT:",t2.weight)
        
        
        
