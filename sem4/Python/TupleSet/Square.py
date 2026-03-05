squares = {i**2 for i in range(1, 11)}
cubes = {i**3 for i in range(1, 11)}
print("Initial squares:", squares)
print("Initial cubes:", cubes)
squares.update(cubes)
print("After update():", squares)
removed_element = squares.pop()
print("After pop():", squares)
print("Removed element:", removed_element)
if 4 in squares:
       squares.remove(4)
       print("After remove(4):", squares)
       squares.clear()
       print("After clear():", squares)
