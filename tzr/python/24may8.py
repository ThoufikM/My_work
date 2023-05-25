class inher:
    def __init__(T,n,f,m):
        T.name = n
        T.fathername = f
        T.mothername = m

class inher1:
    def __init__(T,a,h):
        T.age = a
        T.height = h

class inher2(inher,inher1):
    def __init__(T,n,f,m,a,h,w):
        inher.__init__(T,n,f,m)
        inher1.__init__(T,a,h)
        T.weight = w

t3 = inher2("THOUFIK","MOAHEMED RAFIK","YASMIN",20,150,69)

print(f"NAME : {t3.name}\n FATHER NAME : {t3.fathername}\n MOTHER NAME : {t3.mothername}\n  AGE : {t3.age}\n HEIGHT : {t3.height}\n WEIGHT : {t3.weight}")
