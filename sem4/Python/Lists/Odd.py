x=[]
for i in range(1,10):
   x.append(i)
   if i%2==0:
      x.remove(i)
print(x)
