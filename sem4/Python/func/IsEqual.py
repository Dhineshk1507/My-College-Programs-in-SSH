def IsEqual(A,B):
   if A==B:
      return 1
   else:
      return 0
A,B=int(input("Enter Two Numbers: ")),int(input())
if IsEqual(A,B) == 1:
   print(A,"and",B,"are equal")
else:
   print(A,"and",B,"are not equal")
