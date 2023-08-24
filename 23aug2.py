class Queue:
   def __init__(T):
      T.front = None
      T.rear = None 
      T.Queue_list = []

   def Enqueue(T,data):
      new_data = data

      if len(T.Queue_list) == 0:
         T.front = new_data
         T.rear = new_data
      else:
         T.rear = new_data

      T.Queue_list.append(data)
      print(new_data,"IS ADDED TO THE QUEUE")
      
   def Dequeue(T):
      print(T.front,"IS DELETE TO THE QUEUE")
      if len(T.Queue_list) == 0:
         print("QUEUE IS EMPTY")
      else:
         T.Queue_list.pop(0)
      if len(T.Queue_list) > 0:
         T.front = T.Queue_list[0]
   
   def display(T):
      print("QUEUE ELEMENTS ARE:")
      for i in T.Queue_list:
         print(i)

   def sizeofqueue(T):
      print("SIZE OF QUEUE IS:",len(T.Queue_list))

   def isempty(T):
      if len(T.Queue_list) == 0:
         print("THE QUEUE IS EMPTY")
      else:
         print("THE QUEUE IS NOT EMPTY")

   def getfront(T):
      print("THE FRONT VALUE OF QUEUE:",T.front)

   def getrear(T):
      print("THE REAR VALUE OF QUEUE:",T.rear)

Q =   Queue()
while True:
   print("QUEUE MENU")
   print("===========")
   print("1.INSERT THE ELEMENT IN QUEUE:")
   print("2.DELETE THE ELEMENT IN QUEUE:")
   print("3.GET FRONT VALUE OF QUEUE:")
   print("4.GET REAR VALUE OF QUEUE:")
   print("5.FIND QUEUE SIZE:")
   print("6.CHECK THE QUEUW IS EMPTY OR NOT:")
   print("7.DISPALY THE QUEUE ELEMENT:")
   print("8.EXIT")

   choice = int(input("ENTER THE CHOICE:"))

   if choice == 1:
      data = int(input("ENTER THE DATA:"))
      Q.Enqueue(data)
   
   elif choice == 2:
      Q.Dequeue()

   elif choice == 3:
      Q.getfront()

   elif choice == 4:
      Q.getrear()

   elif choice == 5:
      Q.sizeofqueue()

   elif choice == 6:
      Q.isempty()

   elif choice == 7:
      Q.display()

   elif choice == 8:
      exit(0)
   
