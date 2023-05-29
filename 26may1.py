class inher:
    def __init__(T,a,b):
        T.a = a
        T.b = b

class inher1(inher):
    def __init__(T,a,b,c):
        inher.__init__(T,a,b)
        T.c = c
        print(T.a + T.b + T.c)
        
cls = inher1(123,345,678)


