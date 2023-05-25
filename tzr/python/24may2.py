try:
    a = int(input("ENTER YOUR 1 ST VALUE:"))
    b = int(input("ENTER YOUR 2 ND VALUE:"))

    c = d // 0

except NameError as t1:
    print("NAME ERROR",t1)
except TypeError as t:
    print("TYPR ERROR",t)
