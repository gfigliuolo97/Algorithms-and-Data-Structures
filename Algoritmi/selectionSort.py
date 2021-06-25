import random

#Vettore vuoto
array = []

#Popolamento dell'array con 10 numeri casuali
arraySize = 10
for _ in range(arraySize):
	array.append(random.randint(0,300))


print("VETTORE NON ORDINATO")
print(array)

#Inizio Selection Sort
for i in range(len(array)):
	posMinimo = i
	minimo = array[i]
	for j in range(i+1,len(array)):
		if array[j] < minimo:
			posMinimo = j
			minimo = array[j]
	
	#Scambio dei numeri
	array[i], array[posMinimo] = array[posMinimo], array[i]

#Fine Selection Sort
print("\nVETTORE ORDINATO")
print(array)