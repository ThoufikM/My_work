class Node:
   def __init__(T,data):
      T.data = data
      T.right = None
      T.left = None

class Tree:
   def createnode(T,data):
      return Node(data)

   def Insertion_in_tree(T,current_node,data):
      if current_node is None:
         return T.createnode(data)
      if data < current_node.data:
         current_node.left = T.Insertion_in_tree(current_node.left,data)
      else:
         current_node.right = T.Insertion_in_tree(current_node.right,data)
      return current_node

   def display(T,root):
      if root is not None:
         T.display(root.left)
         print(root.data)
         T.display(root.right)

Tr = Tree()
root = Tr.createnode(5)
print("ROOT ELEMENT IS :",root.data)
Tr.Insertion_in_tree(root,2)
Tr.Insertion_in_tree(root,6)
Tr.Insertion_in_tree(root,4)
Tr.Insertion_in_tree(root,3)
Tr.Insertion_in_tree(root,8)
Tr.Insertion_in_tree(root,9)
Tr.Insertion_in_tree(root,7)
Tr.Insertion_in_tree(root,10)
Tr.Insertion_in_tree(root,12)
print("INORDER IN TREE:")
Tr.display(root)
