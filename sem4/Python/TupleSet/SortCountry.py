def SortCountry(Countries):
   CountriesSet = set(Countries)
   SortedList = sorted(list(CountriesSet))
   for i in SortedList:
      print(i)
SortCountry(Countries=("USA","Australia","Japan","India","Arab","Pakistan","Russia"))
