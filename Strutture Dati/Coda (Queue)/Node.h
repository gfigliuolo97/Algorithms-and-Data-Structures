/*
 * Node.h
 *
 *  Created on: 4 lug 2021
 *      Author: giovannifigliuolo
 *      Description: Single Node
 */

#ifndef NODE_H_
#define NODE_H_


template <class T>
class Node{
public:
	Node();
	Node(T);
	~Node();
	Node<T> * getNext();
	void setNext(Node<T> *);
	T getValue();
private:
	T value;
	Node<T> * nextNode;
};

template <class T>
Node<T>::Node(){
	this->value = NULL;
	nextNode = nullptr;
}

template <class T>
Node<T>::~Node(){

}

template <class T>
Node<T>::Node(T value){
	this->value = value;
	nextNode = nullptr;
}

template <class T>
Node<T>* Node<T>::getNext(){
	return this->nextNode;
}

template <class T>
void Node<T>::setNext(Node<T> * next){
	this->nextNode = next;
}

template <class T>
T Node<T>::getValue(){
	return this->value;
}
#endif /* NODE_H_ */
