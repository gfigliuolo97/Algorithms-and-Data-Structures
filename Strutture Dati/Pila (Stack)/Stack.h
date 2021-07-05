/*
 * Stack.h
 *
 *  Created on: 5 lug 2021
 *      Author: giovannifigliuolo
 */

#ifndef STACK_H_
#define STACK_H_

#include "Node.h"
#include "StackExceptions.h"


template <class T>
class Stack{
public:
	Stack();
	~Stack();
	void push(T);
	void pop();
	T top();
	bool isEmpty();
	int getSize();
	friend ostream& operator<<(ostream& os, const Stack<T>& s){
		Node<T>* temp = new Node<T>();
		temp = s.head;
		cout << "<";
		while (temp != nullptr){
			os << temp->getValue() << " " ;
			temp = temp->getNext();
		}
		cout << ">" << endl;
		return (os);
	}
private:
	Node<T> * head;
	int size;
};

template <class T> Stack<T>::Stack(){
	this->head = nullptr;
	size = 0;
}

template <class T> Stack<T>::~Stack(){
	while(head != nullptr){
		pop();
	}
	delete head;
}

template <class T> void Stack<T>::push(T value){
	Node<T> * node = new Node<T>(value);
	node->setNext(head);
	head = node;
	size += 1;
}

template <class T>
bool Stack<T>::isEmpty(){
	return (size == 0);
}

template <class T>
void Stack<T>::pop(){
	if(!isEmpty()){
		Node<T> *node = head;
		head = head->getNext();
		delete node;
		size -=1 ;
	}else{
		throw emptyStackException();
	}
}

template <class T>
T Stack<T>::top(){
	if(!isEmpty()){
		return head->getValue();
	}else{
		throw emptyStackException();
	}
}

template <class T>
int Stack<T>::getSize(){
	return this->size;
}
#endif /* STACK_H_ */
