from collections import Counter
def total_words_count_in_file():
    o = open("16jun.txt","r")
    r = o.read()
    v_count = 0
    c_count = 0
    n_count = 0
    w_count = 0
    w1_count =0
    w = r.split(" ")
    for i in r:
        if i in "AEIOU":
            v_count +=1
        elif i in "BCDFGHJKLMNPQRSTVWXYZ":
            c_count +=1
        elif i in "1234567890.":
            n_count +=1
        elif i in " ":
            w_count +=1
    for i in w:
        w1_count +=1
    print("VOWELS:",v_count)
    print("COSONENTS:",c_count)
    print("NUMBERS AND DOT:",n_count)
    print("WORDS:",w_count)
    print("WORDS2:",w1_count)
    
total_words_count_in_file()
