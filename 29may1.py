class enum:
    def enum_of_list(A):
        A.T = ["THOUFIK","ASHIK","THARIK"]
        A.T1 = "THOUFIK"

        a = enumerate(A.T)
        b = enumerate(A.T1)

        print("TYPE:",type(a))
        print(list(enumerate(A.T)))

        print("TYPE:",type(b))
        print(list(enumerate(A.T1)))

obj = enum()
obj.enum_of_list()
