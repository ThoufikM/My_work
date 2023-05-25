#nested recertion
def nes(n):
    if n > 10:
        return n - 1
    return nes(nes(n + 2))
def thoufik():
    n = int(input("VALUE:"))
    a = nes(n)
    print(a)
thoufik()
