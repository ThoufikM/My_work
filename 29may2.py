class enum:
    def enum_of_list(A):
        A.T = ["THOUFIK","ASHIK","THARIK"]
        A.T1 = "THOUFIK"

        a = enumerate(A.T)
        b = enumerate(A.T1)

        for i in enumerate(a):
            print(tuple(i))
        for i in enumerate(b):
            print(list(i))

obj = enum()
obj.enum_of_list()
