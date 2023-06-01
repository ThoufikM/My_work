class string:
    def string_length(T):
        s = str(input("ENTER YOUR STRING:"))
        length = 0

        for i in s:
            length +=1
        
        print("STRING LENGTH:",length)

ob = string()
ob.string_length()