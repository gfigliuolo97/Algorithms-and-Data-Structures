//============================================================================
// Name        : Stack.cpp
// Author      : Giovanni Figliuolo
// Version     : 1.0
// Copyright   : Your copyright notice
// Description : Stack data structure using single Node.
//============================================================================

#include <iostream>
using namespace std;
#include "Stack.h"
int main() {

	Stack<int> stack;

	stack.push(5);
	stack.push(77);
	cout << "Stack after push(5) and push(77):" << endl << stack;
	stack.pop();
	stack.pop();

	stack.push(99);
	cout << "Stack after two times pop() and push(99):" << endl << stack;
	cout << "Stack's top element:" << stack.top() << endl;
	cout << "Stack size:" << stack.getSize() << endl;
	cout << "Is Stack empty? 0=false, 1=true: " << endl << stack.isEmpty() << endl;

	cout << "Destroying Stack:" << endl;
	stack.~Stack();


	return 0;
}
