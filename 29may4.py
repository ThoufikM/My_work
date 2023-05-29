class find:
    def find_prime_number(self):
        c = 0
        n = int(input("ENTER THE VALUE:"))

        for i in range(1,n+1):
            if n % i == 0:
                c +=1

        if c == 2:
            print("PRIME NUMBER")
        else:
            print("NOT A PRIME NUMBER")

obj_find = find()
obj_find.find_prime_number()
