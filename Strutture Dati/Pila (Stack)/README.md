# Pila
Implementazione della struttura dati Pila in C++.
Una _Pila_ utilizza un metodo chiamato [**LIFO**](https://it.wikipedia.org/wiki/LIFO "**LIFO**") (**L**ast **I**n **F**irst **O**ut) che prevede che l'ultimo elemento inserito sia il primo ad uscire.
## Utilizzo
#### Creazione di una pila
```cpp
  //Creazione di una pila di interi
  Stack<int> stack;
```
#### Inserimento nella pila
```cpp
  //Inseriamo gli interi 5,77 all'interno della pila.
  stack.push(5);
  stack.push(77);
```
La pila avrà i seguenti elementi al suo interno: < 5,77 >

#### Rimozione dell'elemento in testa
```cpp
  stack.pop();
```
La coda avrà i seguenti elementi al suo interno: < 77 >

#### Stampa del numero di elementi nella pila
```cpp
  stack.getSize();
```
_Output_ : `1` 

#### Distruzione della lista
```cpp
  stack.~Stack();
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
### La classe `Stack`

#### Struttura
- `int` `size` - Numero di elementi nella pila.
- `Node<T> *` `head`- Puntatore al nodo in testa.

#### Metodi
- `Stack()` - Costruttore della pila.
- `~Stack()` - Distruttore della pila.
- `void` `push(T)` - Inserisce l'elemento nella pila.
- `void` `pop()`- Elimina l'elemento in testa.
- `int` `getSize()` - Restituisce il numero di elementi presenti nella pila.
- `T` `top()`- Restituisce il valore dell'elemento in testa.
- `bool` `isEmpty()` - Restituisce `true` se la pila è vuota, `false` altrimenti.
