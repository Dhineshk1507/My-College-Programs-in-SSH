def Interest(P,N,R):
   return P*N*R/100
P=int(input("Enter the principle value: "))
N=int(input("Enter the Number of years: "))
Sen=input("Is that person a Senior Citizen yes/no: ")
if Sen=="yes":
   R=12
elif Sen=="no":
   R=10
else:
   print("invalid option")
print("The interest is: ",Interest(P,N,R))
