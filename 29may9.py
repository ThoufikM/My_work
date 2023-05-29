class find:
    def find_amstrong_number(A):
        t = int(input("ENTER THE VALUE:"))
        a = 0
        m = 0
        b = t

        if b > 9999:
            while t > 0:
                m = t % 10
                a = a + m * m * m * m * m 
                t = t // 10
            

        elif b > 999:
            while t > 0:
                m = t % 10
                a = a + m * m * m * m
                t = t // 10
            

        elif b > 99:
            while t > 0:
                m = t % 10
                a = a + m * m * m 
                t = t // 10
          
          
        print(a)
        
        if b == a:
            print("AMSTORNG NUMBER")
        else:
            print("NOT A AMSTORNG NUMBER")


obj = find()
obj.find_amstrong_number()
