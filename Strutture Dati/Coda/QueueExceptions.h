/*
 * QueueExceptions.h
 *
 *  Created on: 4 lug 2021
 *      Author: giovannifigliuolo
 */

#ifndef QUEUEEXCEPTIONS_H_
#define QUEUEEXCEPTIONS_H_

#include <iostream>

class QueueExceptions{
   public:
	QueueExceptions () : message("Queue Exception") {};
	QueueExceptions (string customMessage) { message = customMessage; };
	void print () { std::cout << message << std::endl; };
   private:
	string message;
};

class emptyQueueException : public QueueExceptions{
	public:
		emptyQueueException() : QueueExceptions("Empty Queue Exception") {};
};

#endif /* QUEUEEXCEPTIONS_H_ */
