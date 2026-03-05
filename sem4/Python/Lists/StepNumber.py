Range=int(input("Enter range"))
Step=int(input("Enter Steps"))
i=int(0)
List=[]
while(i<Range):
   List.append(i)
   i=i+Step
print("The List is: ",List[::-1])
