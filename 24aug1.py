class Stack:
   def __init__(T):
      T.top = None
      T.Stack_list = []

   def push(T,data):
      new_data = data
      T.Stack_list.append(new_data)
      T.top = new_data
      print(new_data,"IS ADDED TO THE STACK")

   def pop(T):
      print(T.top,"IS DELETED TO THE STACK")
      if len(T.Stack_list) == 0:
         print("STACK IS EMPTY")
      else:
         T.Stack_list.remove(T.top)

      if len(T.Stack_list) > 0:
         L = len(T.Stack_list) - 1
         T.top = T.Stack_list[L]
      else:
         T.top = None

   def gettop(T):
      print("THE TOP VALUE IS:",T.top)
      
   def sizeofstack(T):
      print("THE SIZE OF STACK IS:",len(T.Stack_list))

   def isempty(T):
      if len(T.Stack_list) == 0:
         print("THE STACK IS EMPTY")
      else:
         print("THE STACK IS NOT EMPTY")

   def display(T):
      for i in T.Stack_list:
         print(i)
   
      
S =Stack()
while True:
   print("STACK MENU")
   print("===========")
   print("1.INSERT THE ELEMENT IN STACK:")
   print("2.DELETE THE ELEMENT IN STACK:")
   print("3.GET TOP VALUE OF STACK:")
   print("4.FIND STACK SIZE:")
   print("5.CHECK THE STACK IS EMPTY OR NOT:")
   print("6.DISPALY THE STACK ELEMENT:")
   print("7.EXIT")

   choice = int(input("ENTER THE CHOICE:"))

   if choice == 1:
      data = int(input("ENTER THE DATA:"))
      S.push(data)
   
   elif choice == 2:
      S.pop()

   elif choice == 3:
      S.gettop()

   elif choice == 4:
      S.sizeofstack()

   elif choice == 5:
      S.isempty()

   elif choice == 6:
      S.display()

   elif choice == 7:
      exit(0)



      
      
      
      
