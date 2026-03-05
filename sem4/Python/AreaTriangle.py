S1,S2,S3=float(input("Enter Side1: ")),float(input("Enter Side2: ")),float(input("Enter Side3: "))
S=(S1+S2+S3)/2
Area=(S*(S-S1)*(S-S2)*(S-S3))**0.5
print("The Area of the triangle is:",Area)
