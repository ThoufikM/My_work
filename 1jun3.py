class reverse:
    def reverse_string(T):
        s = input("ENTER THE STRING:")
        t = s

        reverse_a_string = s[::-1]

        print("REVERSE A STRING:",reverse_a_string)

        if reverse_a_string == t:
            print ("IT IS A PALINDROME STRING")
        else:
            print("NOT A PALINDROME STRING")

            

o = reverse()
o.reverse_string()