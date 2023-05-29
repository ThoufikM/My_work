class EMPOLYEE_1_YEAR_EX:
    def DETAILS1(T):
        T.NAME1 = input("ENTER EMPOLYEE ONE NAME:")
        T.ID1 = int(input("ENTER EMPOLYEE ONE ID NUMBER:"))

class EMPOLYEE_DATABASE:
    def DATABASE(T):
        T.NAME2 = (input("DATABASE:"))
        T.ID2 = int(input("DATABASE:"))


class FIND_SALARY(EMPOLYEE_1_YEAR_EX,EMPOLYEE_DATABASE):
    def SALARY(T):
        if T.NAME1 == T.NAME2 and T.ID1 == T.ID2:
            print("NAME :",T.NAME1)
            print("ID:",T.ID1)
            print("SALARY:",25000)

        else:
            print("THIS EMPOLYEE NOT REGISTER DATABASE OR NOT WORKING IN OUR OFFICE")


T1 = FIND_SALARY()
T1.DETAILS1()
T1.DATABASE()
T1.SALARY()
