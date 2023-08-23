class node:
   def __init__(T,data):
      T.data = data
      T.next = None

class linked_list:
   def __init__(T):
      T.head = None
      T.tail = None

   def insert_at_begining(T,data):
      new_node = node(data)
      if T.head is None:
         T.head = new_node
         T.tail = new_node
         T.head.next = T.head
      else:
         if T.head == T.head.next:
            T.head.next = new_node
         else:
            T.tail.next = new_node
         new_node.next = T.head
         T.head = new_node
         

   def insert_at_index(T,data,index):
      new_node = node(data)
      current_node = T.head
      if index == 0:
         T.insert_at_begining(data)
      else:
         for i in range(1,index):
            current_node = current_node.next
            if current_node == None:
               print("INVALIED POSITION")

         if current_node.next == T.head:
            T.tail = new_node

         new_node.next = current_node.next
         current_node.next = new_node

      print("INSERT VALUE IS",data,"AT",index,"POSITION")
      
   def delete(T,index):
      if index == 0:
         T.head = T.head.next
         T.tail.next = T.head
         print("DELETE THE",index,"POSITION SUCESSFULLY")
      else:
         current_node = T.head
         previous_node = 0
         for i in range(index):
            previous_node = current_node
            current_node = current_node.next
            if T.head == None:
               print("INVALIED POSITION")
         previous_node.next = current_node.next
         
         print("DELETE THE",index,"POSITION SUCESSFULLY")
               
   def display(T):
      if T.head == None:
         print("LINKED LIST IS EMPTY")
      else:
         current_node = T.head
         print("LINKED LIST ELEMENTS ARE:")
         while True :
            print(current_node.data,end = " ")
            current_node = current_node.next
            if current_node.next == T.head:
               print(current_node.data,T.head.data)
               break
            

   def reverse(T):
      if T.tail == None:
         print("LINKED LIST IS EMPTY")
      else:
         current_node = T.tail
         print("LINKED LIST ELEMENTS IN REVERSE:")
         while True:
            print(current_node.data,end =" ")
            current_node = current_node.back
   
L = linked_list()
while True:
   print("\nCIRCULAR LINKED LIST MENU")
   print("============================")
   print("1.INSERT THE ELEMENTS")
   print("2.DELETE THE ELEMENTS")
   print("3.DISPLAY THE ELEMENTS")
   print("4.EXIT")

   choice = int(input("ENTER THE CHOICE:"))

   if choice == 1 :
      index = int(input("ENTER THE INDEX:"))
      data = int(input("ENTER THE VALUE:"))
      L.insert_at_index(data,index)

   elif choice == 2:
      index = int(input("ENTER THE INDEX:"))
      L.delete(index)

   elif choice == 3:
      L.display()

   elif choice == 4:
      print("PROGRAM WAS EXITED")
      exit(0)

