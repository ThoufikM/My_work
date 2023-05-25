#head recertion
def thoufik(n):

    if n == 10:
        return n
    thoufik(n + 1)
    print(n)
def th():
    n = int(input("ENTERTHE VALUE:"))
    a = thoufik(n)
    print(a)
th()
