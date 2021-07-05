/*
 * Queue.h
 *
 *  Created on: 4 lug 2021
 *      Author: giovannifigliuolo
 *      Description: Queue of Nodes
 */

#ifndef QUEUE_H_
#define QUEUE_H_

#include "Node.h"
#include "QueueExceptions.h"


template <class T>
class Queue{
public:
	Queue();
	~Queue();
	void enqueue(T);
	void dequeue();
	int getSize();
	T getFrontValue();
	bool isEmpty();

	friend ostream& operator<<(ostream& os, const Queue<T>& q){
		Node<T>* temp = new Node<T>();
		temp = q.head;
		cout << "<";
		while (temp != nullptr){
			os << temp->getValue() << " " ;
			temp = temp->getNext();
		}
		cout << ">" << endl;
		return (os);
	}

private:
	Node<T> *head;
	Node<T> *tail;
	int size;
};

template <class T>
Queue<T>::Queue(){
	head = tail = nullptr;
	size = 0;
}

template <class T>
Queue<T>::~Queue(){
	while(!isEmpty()){
		dequeue();
	}
}

//Inserting element at last position
template <class T>
void Queue<T>::enqueue(T element){
	Node<T> *node = new Node<T>(element);
	if(isEmpty()){
		head = node;
		node->setNext(nullptr);
		tail = node;
	}else{
		tail->setNext(node);
		tail = node;
	}
	size +=1;
}

//Deleting the element at first position, if present.
template <class T>
void Queue<T>::dequeue(){
	if(!isEmpty()){
		Node<T> * node = head;
		head = head->getNext();
		delete node;
		size -= 1;
	}else{
		throw emptyQueueException();
	}
}

template <class T>
bool Queue<T>::isEmpty(){
	return (head == nullptr);
}

template <class T>
int Queue<T>::getSize(){
	return this->size;
}

template <class T>
T Queue<T>::getFrontValue(){
	if(!isEmpty()){
		return head->getValue();
	}else{
		throw emptyQueueException();
	}
}


#endif /* QUEUE_H_ */
