List = []
List2 = []
i=0
N = int(input("Enter number of elements: "))
while(i<N):
   List.append(int(input("Enter value: ")))
   i=i+1
for x in List:
   if x not in List2:
      List2.append(x)
print(List2)
