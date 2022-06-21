#include <iostream>
#include "Data.h"

using namespace std;
template<typename T>
classStack<T>::classStack(int size)
{
	stackArray = new T[size]; 
	stackSize = size; 
	top = -1;
}

template<typename T>
void classStack<T>::push(T num)
{
	if (isFull())
	{
		cout << "The stack is full.\n";
	}
	else
	{
		top++;
		stackArray[top] = num;
	}
}

template<typename T>
void classStack<T>::pop(T &num)
{
	if (isEmpty())
	{
		cout << "The stack is empty.\n";
	}
	else
	{
		num = stackArray[top];
		top--;
	}
}

template<typename T>
bool classStack<T>::isFull()
{
	bool status;

	if (top == stackSize - 1)
		status = true;
	else
		status = false;
	return status;
}

template<typename T>
bool classStack<T>::isEmpty()
{
	bool status;

	if (top == -1)
		status = true;
	else 
		status = false;

	return status;
}


