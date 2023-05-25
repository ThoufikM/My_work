try:
    a = int(input("ENTER YOUR 1 ST VALUE:"))
    b = int(input("ENTER YOUR 2 ND VALUE:"))

    c = a // b

except NameError as t1:
    print("NAME ERROR",t1)
except TypeError as t:
    print("TYPR ERROR",t)
except ZeroDivisionError as t2:
    print("ZERO DIVISION ERROR",t2)

else:
    print("DIVISION VALUE:",c)
    print("SUCESSFULLY DIVIED")

finally:
    print("THIS PROGRAM HAVE EXCEPTIONS OR FINISHED")
    
