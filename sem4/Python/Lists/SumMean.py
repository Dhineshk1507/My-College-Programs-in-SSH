#Creating list
List = []
i=0
Sum=0
N = int(input("Enter the number of elements: "))
while (i<N):
   List.append(int(input("Enter value: ")))
   i=i+1
#Sum
i=0
while (i<N):
   Sum = Sum + List[i]
   i = i+1
print("The List is:",List)
print("The Sum of all elements:",Sum)
print("The average of all elements:",Sum/N)
