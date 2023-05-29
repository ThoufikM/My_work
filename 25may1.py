class poly:
    def info(T):
        T.a = int(input("ENTER YOUR VALUE OF A:"))
        T.b = int(input("ENTER YOUR VALUE OF B:"))
        add = T.a + T.b
        print("ADDITION:",add)

        
class poly1(poly):
    def info(T):
        T.c = int(input("ENTER YOUR VALUE OF C:"))
        T.d = int(input("ENETR YOUR VALUE OF D:"))
        mul = T.c * T.d
        print("MULIPLY:",mul)

t1 = poly1()
t1.info()
