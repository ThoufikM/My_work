class _sum:
    def sum_of_digits(A):
        t = int(input("ENTER THE VLAUE:"))
        m = 0
        a = 0


        while t > 0:
            m = t % 10
            a = m + a
            t = t // 10
        print(a)


ob = _sum()
ob.sum_of_digits()
        
