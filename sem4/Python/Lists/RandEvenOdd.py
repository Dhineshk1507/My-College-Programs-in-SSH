import random
List=[]
for i in range(0,10):
   List.append(int(random.randrange(1,10)))
print("The List is:",List)
ListEven=[]
ListOdd=[]
i=int(0)
for i in List:
   if(i%2==0):
      ListEven.append(i)
   elif(i%2!=0):
      ListOdd.append(i)
print("The Even List is: ",ListEven)
print("The Odd List is: ",ListOdd)
