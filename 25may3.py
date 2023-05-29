class poly:
    def info1(T):
        T.a = int(input("ENTER YOUR VALUE OF A:"))
        T.b = int(input("ENTER YOUR VALUE OF B:"))
        add = T.a + T.b
        print("ADDITION:",add)

        
class poly1(poly):
    def info2(T):
        T.c = int(input("ENTER YOUR VALUE OF C:"))
        T.d = int(input("ENETR YOUR VALUE OF D:"))
        mul = T.c * T.d
        print("MULIPLY:",mul)

class poly2(poly1):
    def info3(T):
        T.e = int(input("ENTER YOUR VALUE OF E:"))
        T.f = int(input("ENTER YOUR VALUE OF F:"))
        div = T.e // T.f
        print("DIVISION:",div)

t1 = poly2()
t1.info3()

