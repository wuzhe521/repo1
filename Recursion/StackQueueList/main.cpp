#include <iostream>
#include <math.h>
#include <Bits.h>
#include "Queue.h"
using namespace std;

#define MAX 1000

class Stack
{
	int top;
public:
	int a[MAX];
	Stack() { top = -1; }
	bool push(int x);
	int pop();
	int peek();
	bool isEmpty();
};
bool Stack::push(int x)
{
	if (top > (MAX -1))
	{
		cout << "Stack Overflow";
		return false;
	}
	else
	{
		a[++top] = x;

		cout << "pushed into stack" << endl;
		return true;
	}
}
int Stack::pop()
{
	if (top < 0)
	{
		cout << "Stack Underflow" << endl;
		return 0;
	}
	else
	{
		int x = a[top--];
		return x;
	}
}
int main()
{
	Stack s;
	Queue q;
	s.push(4);
	s.push(3);
	s.push(2);

	int elementpoped1 = s.pop();
	int elementpoped2 = s.pop();
	int elementpoped3 = s.pop();

	cout << elementpoped1 << " poped from Stack" << endl;
	cout << elementpoped2 << " poped from Stack" << endl;
	cout << elementpoped3 << " poped from Stack" << endl;

	q.deQueue();
	q.enQueue(1);
	q.enQueue(2);
	q.enQueue(3);
	q.enQueue(4);
	q.enQueue(5);
	// 
	q.enQueue(6);
	q.deQueue();
	q.display();
	return 0;
}
