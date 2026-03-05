Pattern = str(input("Enter the pattern you need: "))
if (Pattern == "Square"):
   for i in range(5):
      print()
      for j in range(5):
         print("*", end=" ")
if (Pattern == "Hallowed Square"):
   for i in range(5):
      print()
      if i==1 or 5:
         for j in range(5):
            print("*", end=" ")
      elif i!= 1 or 5:
         for j in range(5):
            print("", end=" ")

