/*
 * StackExceptions.h
 *
 *  Created on: 5 lug 2021
 *      Author: giovannifigliuolo
 */

#ifndef STACKEXCEPTIONS_H_
#define STACKEXCEPTIONS_H_

#include <iostream>

class StackExceptions{
   public:
	StackExceptions () : message("Stack Exception") {};
	StackExceptions (string customMessage) { std::cout << customMessage << std::endl; };
   private:
	string message;
};

class emptyStackException : public StackExceptions{
	public:
		emptyStackException() : StackExceptions("Empty Stack Exception") {};

};

#endif /* STACKEXCEPTIONS_H_ */
