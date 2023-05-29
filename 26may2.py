class lista:
    def list_operation(T):
        T.list_A = ["THOUFIK","THARIK","ASHIK"]
        T.list_B = ["FIRTHICK","SAFIK","ISHAK"]

class listb(lista):
    def list_add(T):
        T.c = T.list_A + T.list_B
        print("LIST ADDITION IN INHER:",T.c)

cl = listb()
cl.list_operation()
cl.list_add()
