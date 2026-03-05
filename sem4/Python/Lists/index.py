List =[]
i=0
count = 0
N = int(input("Enter number of elements: "))
while(i<N):
   List.append(int(input("Enter value: ")))
   i=i+1
i=0
X = int(input("Enter the value to find: "))
print(X,"is found on indices: ",end="")
for i in range(0,N):
   if X==List[i]:
      print(i,end=", ")
      count = count + 1
if(count==0):
   print("NOT FOUND")
print(".",count,"times")
