//============================================================================
// Name        : BalancedParentheses.cpp
// Author      : Giovanni Figliuolo
// Version     : 1.0
// Copyright   : Your copyright notice
// Description : Check if parentheses are balanced using Stack data structure.
//============================================================================

#include <iostream>
using namespace std;
#include "Stack.h"
template <class T>
bool isExpressionBalanced(T * exp, int length){
	Stack<T> * stack = new Stack<T>();
	for(int i= 0; i<length ;i++){
		if(exp[i] == '(' || exp[i] == '[' || exp[i]== '{'){
			stack->push(exp[i]);
		}else if(exp[i] == ')' || exp[i] == ']' || exp[i]== '}'){
			if(exp[i] == ')' && (stack->isEmpty() || stack->top() != '(')){
				return false;
			}else if(exp[i] == ']' && (stack->isEmpty() || stack->top() != '[')){
				return false;
			}else if(exp[i] == '}' && (stack->isEmpty() || stack->top() != '{')){
				return false;
			}
			else{
				stack->pop();
			}
		}
	}
	return true;
}
int main() {
	char expression[] = {'{','(',')','}'};
	if(isExpressionBalanced(expression, (sizeof(expression)/sizeof(*expression)))){
		cout << "Balanced Expression";
	}else{
		cout << "Not Balanced Expression";
	}
	return 0;
}

