// QueueObject.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

#define MAXQUEUESIZE 100

class MyStackQueue{
	int myStackQueue [MAXQUEUESIZE];
	int current; 

	public:
		MyStackQueue()
		{
			current = -1;
		}
	
		void push(int pushValue)
		{
			if (current > MAXQUEUESIZE)
				return;
			myStackQueue[++current] = pushValue;
		}

		int pop()
		{
			if (current == -1)
				throw "At end of queue!!!";
			int popValue = myStackQueue[current];
			current--;
			return popValue;
		}

};

class MyQueue {
	int myQueue[MAXQUEUESIZE];
	int current;
	
public:
	MyQueue()
	{
		current = -1;
	}

	void Queue(int pushValue)
	{
		if (current > MAXQUEUESIZE)
			return;
		myQueue[++current] = pushValue;
	}

	int Dequeue()
	{
		int popValue = myQueue[0];
		int temp[MAXQUEUESIZE];
		for (int i = 0; i < MAXQUEUESIZE; ++i)
			myQueue[i] = myQueue[i + 1];
		current--;
		return popValue;
	}

};

int main()
{
	MyStackQueue q;
	q.push(1);
	q.push(2);
	q.push(3);
	cout << " my queue: " << q.pop() << endl;
	cout << " my queue: " << q.pop() << endl;
	cout << " my queue: " << q.pop() << endl;
	cout << " my queue: " << q.pop() << endl;

	MyQueue q2;
	q2.Queue(4);
	q2.Queue(5);
	q2.Queue(6);
	cout << " dequeue: " << q2.Dequeue() << endl;

	q2.Queue(7);
	cout << " dequeue: " << q2.Dequeue() << endl;
	cout << " dequeue: " << q2.Dequeue() << endl;
	cout << " dequeue: " << q2.Dequeue() << endl;

	cout << " dequeue: " << q2.Dequeue() << endl;



	return 0;

}


