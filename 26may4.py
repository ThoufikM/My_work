class students:
    def passs(T):
        T.name = input("ENTER THE NAME:")
        T.regno = input("ENTER THA REG NO:")

class student_mark(students):
    def stdent_database(T):
        T.nameD = input("DATABASE NAME:")
        T.regnoD = input("DATABASE REGNO:")

        if T.name == T.nameD and T.regno == T.regnoD:
             print("THID STUDENT ARE PASS IN ALL SUBJECT")
        else:
            print("THIS STUDENT NOT IN PASS LIST")

cl = student_mark()
cl.passs()
cl.stdent_database()

                             
