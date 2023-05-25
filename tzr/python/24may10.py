class inher1:
    def __init__(T):
        T.a =10
        T.b =20
        T.c = 30

class inher2(inher1):
    def __init__(T):
        inher1.__init__(T)
        T.d = 40
        T.e = 50

class inher3(inher2):
    def __init__(T):
        inher2.__init__(T)
        T.f = 5

t5 = inher3()

print("ADDITION OF", t5.a, "AND" ,t5.b,":",t5.a + t5.b)
print("MULTIPLY OF", t5.c, "AND" ,t5.d,":",t5.c * t5.d)
print("DIVISION OF", t5.e ,"AND" ,t5.f,":",t5.e // t5.f)
