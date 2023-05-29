class reverse:
    def reverse_a_number(A):
        t = int(input("ENTER THE VALUE:"))
        a = 0
        m = 0


        while t > 0:
            m = t % 10
            a = a * 10 + m
            t = t // 10

        print(a)


obj = reverse()
obj.reverse_a_number()
