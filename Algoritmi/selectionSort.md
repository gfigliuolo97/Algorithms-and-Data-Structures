# Selection Sort
Algoritmo di ordinamento per selezione sviluppato in Python.

## Svolgimento
1. Viene creato inizialmente un vettore vuoto (in questo caso una lista)
2. Popolazione di ```n = 10``` elementi casuali.
	Mediante l'utilizzo di ```random.randint()``` vengono generati numeri _interi_, in queso caso compresi tra 0 e 300.
3. Esecuzione dell'algoritmo di ricerca per selezione.
4. Stampa del vettore ordinato

## Funzionamento del Selection Sort
L'algoritmo di ordinamento per selezione prevede l'utilizzo di un due cicli. Il primo ciclo scandisce l'i-esimo elemento del vettore. Il secondo ciclo serve per cercare se c'è un valore minimo a partire dalle _i-esima + 1_ posizione. Si procede effettuando uno scambio quando viene trovato un valore minore rispetto a quello in posizione _i_.

## Note
Questo algoritmo non è stabile, ovvero nel momento in cui ci sono due o più elementi uguali, non vengono ordinati in base all'ordine di posizione nell'array. Per risolvere questo problema si deve utilizzare una lista collegata al posto di un vettore / lista.