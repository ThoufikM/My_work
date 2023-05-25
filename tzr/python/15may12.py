    def facti(n):
    if n == 1:
        return 1
    return n * facti(n-1)
def thoufik():
    n = int(input("ENTER THE VALUE:"))
    ans = facti(n)
    print("factorial value is:",ans)
thoufik()
