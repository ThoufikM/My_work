class overload:
    def over(T):
        T.a = int(input("ENTER YOUR VALUE OF A:"))
        T.b = int(input("ENTER YOUR VALUE OF B:"))
        T.c = T.a / T.b
        print("DIVISION :",T.c)


t1 = overload()
t1.over()
