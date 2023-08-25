class Node:
   def __init__(T,data):
      T.data = data
      T.right = None
      T.left = None

class Tree:
   def __init__(T):
      T.root = None

   def Insertion_in_tree(T,data):
      new_node = Node(data)

      if T.root is None:
         T.root = new_node
         print("THE ROOT IS:",data)

      elif T.root.right == None:
         T.root.right = new_node

      elif T.root.right != None and T.root.left == None:
         T.root.left = new_node

      elif T.root.right.right == None and T.root.left != None and T.root.right != None:
         T.root.right.right = new_node

      elif T.root.right.left == None and T.root.right.right != None and T.root.left != None and T.root.right != None:
         T.root.right.left = new_node

      elif T.root.left.right == None and T.root.right.left != None and T.root.right.right != None and T.root.left != None and T.root.right != None:
         T.root.left.right = new_node

      elif T.root.left.left == None and T.root.left.right != None and T.root.right.left != None and T.root.right.right != None and T.root.left != None and T.root.right != None:
         T.root.left.left = new_node

      print(data,"IS INSERTED TO THE TREE")

   def display_right(T):
      if T.root == None:
         print("THE TREE IS EMPTY")
      current_node = T.root
      print("THE RIGHT ELEMENTS OF TREE:")
      while current_node != None:
         print(current_node.data)
         current_node = current_node.right

   def display_left(T):
      if T.root == None:
         print("THE TREE IS EMPTY")
      current_node = T.root
      print("THE LEFT ELEMENTS OF TREE:")
      while current_node != None:
         print(current_node.data)
         current_node = current_node.left
         
Tr = Tree()
print("TREE SIZE IS 7 SO ENTER THE 7 ELEMENT ONLY")
while True:
   print("TREE MENU")
   print("=========")
   print("1.INSERT THE ELEMENT IN TREE:")
   print("2.DISPLAY THE RIGHT ELEMENTS:")
   print("3.DISPLAY THE LEFT ELEMENTS:")

   choice = int(input("ENTER THE CHOICE:"))

   if choice == 1:
      data = int(input("ENTER THE NODE DATA:"))
      Tr.Insertion_in_tree(data)

   elif choice == 2:
      Tr.display_right()

   elif choice == 3:
      Tr.display_left()
      
