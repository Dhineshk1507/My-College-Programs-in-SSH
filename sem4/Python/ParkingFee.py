Vehicle = str(input("Specify the type of vehicle: "))
EnterHr = int(input("Enter Entering Time in 24Hr format\nHr: "))
EnterMin = int(input("Min: "))
LeaveHr = int(input("Enter Leaving Time in 24Hr format\nHr: "))
LeaveMin = int(input("Min: "))
Enter = EnterMin + EnterHr*60
Leave = LeaveMin + LeaveHr*60
Diff = Leave - Enter
print(Vehicle,"parking Fee is : ")
if(Diff<180):
   if(Vehicle == "Truck" or Vehicle == "Bus"):
      print("20")
   elif(Vehicle == "Car"):
      print("10")
   elif(Vehicle == "Cycle"):
      print("5")
elif(Diff>180):
   if(Vehicle == "Truck" or Vehicle == "Bus"):
      print("30")
   elif(Vehicle == "Car"):
      print("20")
   elif(Vehicle == "Cycle"):
      print("10")
else:
   print("Vehicle type not found")
