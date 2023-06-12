#selection sort
s1 = 23
s2 = 25
s3 = 12
s4 = 21
s5 = 11

print("UN SORTED:",s1,s2,s3,s4,s5)

small = min(s1,s2,s3,s4,s5)
print("SMALLEST NUMNBER:",small)

if s5 < s1:
    s5,s1 = s1,s5
print("ITRETION 1:",s1,s2,s3,s4,s5)
print("S1 IS SORTED")

small2 = min(s2,s3,s4,s5)
print("SECOND SMALLESTV NUMBER",small2)

if s3 < s2:
    s3,s2 = s2,s3
print("ITRETION 2:",s1,s2,s3,s4,s5)
print("S2 IS SORTED")

small3 = min(s3,s4,s5)
print("THIRED SMALLESTV NUMBER",small3)

if s4 < s3:
    s4,s3 = s3,s4
print("ITRETION 3:",s1,s2,s3,s4,s5)
print("S3 IS SORTED")

small4 = min(s4,s5)
print("FOUTH SMALLEST NUMBER",small4)

if s5 < s4:
    s5,s4 = s4,s5
print("ITRETION 3:",s1,s2,s3,s4,s5)
print("S4 IS SORTED")
print("  ")
print("THE SELECTION SORT IS :",s1,s2,s3,s4,s5)


