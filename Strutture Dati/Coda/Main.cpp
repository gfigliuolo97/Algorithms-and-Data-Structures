//============================================================================
// Name        : Main.cpp
// Author      : Giovanni Figliuolo
// Version     : 1.0
// Copyright   : Your copyright notice
// Description : Queue Data Structure using nodes like a Single LinkedList
//============================================================================

#include <iostream>
using namespace std;
#include "Queue.h"

int main() {

	Queue<int> queue;

	queue.enqueue(10);
	queue.enqueue(30);
	queue.enqueue(44);
	queue.enqueue(16);

	cout << "Queue front value: " << queue.getFrontValue() << endl;

	cout << "Queue before dequeue() has: " << queue.getSize() << " elements:" << endl << queue;

	queue.dequeue();
	cout << "Queue after dequeue() has: " << queue.getSize() << " elements:" << endl << queue;

	queue.~Queue();
	cout << "Queue after deleting all elements has: " << queue.getSize() << " elements." << endl << queue;

	return 0;
}
