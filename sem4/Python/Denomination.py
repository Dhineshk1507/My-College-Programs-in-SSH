Cost=int(input("Enter the Cost of the product: "))
Given=int(input("Enter the Given amount: "))
Balance=Given-Cost
#N2000=input("Enter the Number of 2000's: ")
#N500=input("Enter the Number of 500's: ")
#N200=input("Enter the Number of 200's: ")
#N100=input("Enter the Number of 100's: ")
#N50=input("Enter the Number of 50's: ")
#N20=input("Enter the Number of 20's: ")
#N10=input("Enter the Number of 10's: ")
BN2000=Balance//2000
Balance=Balance%2000
BN500=Balance//500
Balance=Balance%500
BN200=Balance//200
Balance=Balance%200
BN100=Balance//100
Balance=Balance%100
BN50=Balance//50
Balance=Balance%50
BN20=Balance//20
Balance=Balance%20
BN10=Balance//10
Balance=Balance%10
print("\nThe Balance to be given in Denominations:")
print("2000: ",BN2000,"\n500: ",BN500,"\n200: ",BN200,"\n100: ",BN100,"\n50: ",BN50,"\n20: ",BN20,"\n10: ",BN10)
