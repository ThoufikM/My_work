class a :
    def add(self):
        a = 10
        b = 11
        c = a + b
        print(c)


class b(a):
    def add(self):
        a = 11
        b = 12
        c = a+b
        print(c)

class c(b):
    def add(self):
        a = 11
        b = 13
        c = a+b
        print(c)


obj_a = a()
obj_b = b()
obj_c = c()

obj_a.add()
obj_b.add()
obj_c.add()
