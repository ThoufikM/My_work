#tail recertion
def thoufik(n):

    if n == 10:
        return
    print(n)
    thoufik(n + 1)
def th():
    n = int(input("ENTERTHE VALUE:"))
    a = thoufik(n)
    print(a)
th()
