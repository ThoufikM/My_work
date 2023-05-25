class student:
    def __init__(t):
        t.name = "THOUFIK"
        t.age = 20
        t.cls = 'b'

class room(student):
    def __init__(t):
        t.regno = "20UCS172"
        t.course = "BSC COM[PUTER SCIENCE"
    

class clas(room):
    def __init__(t):
        student.__init__(t)
        room.__init__(t)
    

obj = clas()

print("NAME :",obj.name)
print("AGE :",obj.age)
print("CLASS:",obj.cls)
print("REG NO :",obj.regno)
print("COURSE:",obj.course)

    
