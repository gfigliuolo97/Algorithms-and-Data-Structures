# Coda
Implementazione della struttura dati Coda in C++.
Una _Coda_ utilizza un metodo chiamato [**FIFO**](https://it.wikipedia.org/wiki/FIFO "**FIFO**") (**F**irst **I**n **F**irst **O**ut) che prevede che il primo elemento in ingresso è il primo ad uscire.
## Utilizzo
#### Creazione di una coda
```cpp
  //Creazione di una coda di interi
  Queue<int> queue;
```
#### Inserimento nella coda
```cpp
  //Inseriamo gli interi 10,30,44,16 all'interno della coda.
  queue.enqueue(10);
  queue.enqueue(30);
  queue.enqueue(44);
  queue.enqueue(16);
```
La coda avrà i seguenti elementi al suo interno: < 10,30,44,16 >

#### Rimozione dell'elemento in testa
```cpp
  //Inseriamo gli interi 10,30,44,16 all'interno della coda.
  queue.dequeue();
```
La coda avrà i seguenti elementi al suo interno: < 30,44,16 >

#### Stampa del numero di elementi nella lista
```cpp
  queue.getSize();
```
_Output_ : `3` 

#### Distruzione della lista
```cpp
  queue.~Queue();
```

## Implementazione

### La classe `Node`

#### Struttura
- `T` `value` - Oggetto da memorizzare
- `Node<T> *` `nextNode`- Puntatore al nodo successivo.

#### Metodi
- `Node()` - Costruttore del Nodo
- `Node(T)` - Costruttore del Nodo con assegnamento diretto del valore di tipo `T`
- `~Node()` - Distruttore (non implementato)
- `Node<T> *` `getNext()` - Puntatore al nodo (`Node`) successivo.
- `void` `setNext(Node<T> *)` - Imposta il puntatore al nodo successivo.
- `T` `getValue()`- Restituisce il valore memorizzato nel nodo.
---
### La classe `Queue`

#### Struttura
- `int` `size` - Numero di elementi nella coda.
- `Node<T> *` `head`- Puntatore al nodo in testa.
- `Node<T> *` `tail`- Puntatore al nodo in coda.

#### Metodi
- `Queue()` - Costruttore della coda.
- `~Queue()` - Distruttore della coda.
- `void` `enqueue(T)` - Inserisce l'elemento all'ultima posizione.
- `void` `dequeue()`- Elimina l'elemento in prima posizione.
- `int` `getSize()` - Restituisce il numero di elementi presenti nella coda.
- `T` `getFrontValue()`- Restituisce il valore dell'elemento in prima posizione.
- `bool` `isEmpty()` - Restituisce `true` se la coda è vuota, `false` altrimenti.
