#pragma once
#include <iostream>
using namespace std;
#define SIZE 5
class Queue
{
private:
	int items[SIZE], front, rear;
public:
	Queue() { front = -1; rear = -1; }
	bool isFull()
	{
		if (front == 0 && rear == SIZE -1)
		{
			return true;
		}
		return false;
	}
	bool isEmpty()
	{
		if (front == -1)
		{
			return true;
		}
		return false;
	}
	void enQueue(int element)
	{
		if (isFull())
		{
			cout << "Queue is full " << endl;
		}
		else
		{
			if (front == -1)
			{
				front = 0;
			}
			rear++;
			items[rear] = element;

			cout << "Inserted element " << element << endl;
		}
	}
	int deQueue()
	{
		int element;
		if (isEmpty())
		{
			cout << "Queue is Empty" << endl;
			return -1;
		}
		else
		{
			element = items[rear];
			if (front >= rear)
			{
				front = -1;
				rear = -1;
			}
			else
			{
				front++;
			}
			cout << "Deleted element " << element << endl;
			return element;
		}

	}
	void display()
	{
		if (isEmpty())
		{
			cout << "Queue is empty" << endl;
		}
		else
		{
			cout << "Front Index->" << front << endl;
			cout << "Item ->";
			for (size_t i = front; i < rear; i++)
			{
				cout << items[i] << " ";
			}
			cout << endl
				<< "Rear Index->" << rear << endl;
		}
	}
};

