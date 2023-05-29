class reverse:
    def reverse_a_number(A):
        t = int(input("ENTER THE VALUE:"))
        a = 0
        m = 0
        t1 = t


        while t > 0:
            m = t % 10
            a = a * 10 + m
            t = t // 10

        print(a)

        if a == t1:
            print("PALINDROME NUMBER")
        else:
            print("NOT A PALINDROME NUMBER")

obj = reverse()
obj.reverse_a_number()
