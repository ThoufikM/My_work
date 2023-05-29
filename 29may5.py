class practice:
    def logic(T):
        t = int(input("ENETR THE VALUE:"))
        a = 0

        while t > 0:
            a = t % 10
            print(a)
            t = t // 10



obj = practice()
obj.logic()
