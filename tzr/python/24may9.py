class inher:
    def __init__(T,a,b):
        T.a1 = a
        T.b1 = b
        
class inher1(inher):
    def __init__(T,a,b,c):
        inher.__init__(T,a,b)
        T.c1= c

t4 = inher1(10,20,30)
print("ADDITION IN INHERITANCE:",t4.c1 + t4.b1 + t4.a1)



