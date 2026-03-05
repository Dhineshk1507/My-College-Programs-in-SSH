Odd = set()
for i in range(1,21,2):
   Odd.add(i)
print(Odd)
def IsPrime(n):
   if n<=1:
      return False
   for i in range(2,int(n**0.5)+1):
      if n%i == 0:
        return False
   return True
prime = { x for x in range(1,21) if IsPrime(x) }
print(prime)
print(prime.union(Odd))
print(prime.intersection(Odd))
print(prime.difference(Odd))
print(prime.symmetric_difference(Odd))
