class inher:
    def __init__(t,nameis,ageis):
        t.name = nameis
        t.age = ageis

class inher1(inher):
        pass

t1 = inher1("THOUFIK",20)
print("NAME:",t1.name)
print("AGE :",t1.age)
