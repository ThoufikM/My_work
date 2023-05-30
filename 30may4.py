class concat:
    def concat_two_srting(T):
        s1 = str(input("ENTER YOUR FIRST STRING:"))
        s2 = str(input("ENTER YOUR SECOND STRING:"))
        s3 =''

        for i in s1:
            s3 = s3 + i 

        for i in s2:
            s3 = s3 + i

        print("CONCATED TWO STRINGS:",s3)

t1 = concat()
t1.concat_two_srting()
