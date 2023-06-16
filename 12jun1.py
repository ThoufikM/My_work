#bubble_sorting
class sorting:
    def bubble_sort(T):
        s1 = int(input("S1:"))
        s2 = int(input("S2:"))
        s3 = int(input("S3:"))
        s4 = int(input("S4:"))
        s5 = int(input("S5:"))
        print("UNSORTED:",s1,s2,s3,s4,s5)


        for i in range(5):
            if s1 > s2:
                s1,s2=s2,s1
            if s2 > s3:
                s2,s3 = s3,s2
            if s3 > s4:
                s3,s4 = s4,s3
            if s4 > s5:
                s4,s5 = s5,s4

            print("ITERATIONS:",s1,s2,s3,s4,s5)
ob = sorting()
ob.bubble_sort()  
   



    

    
