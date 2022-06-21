#include <iostream>
#include "Data.h"

using namespace std;

//*******************
// Constructor      *
//*******************
template<typename T>
classStack<T>::classStack(int size)
{
	stackArray = new T[size]; 
	stackSize = size; 
	top = -1;
}
//*************************************************
// Member function push pushes the argument onto  *
// the stack.                                     *
//*************************************************

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
//****************************************************
// Member function pop pops the value at the top     *
// of the stack off, and copies it into the variable *
// passed as an argument.                            *
//****************************************************

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
//***************************************************
// Member function isFull returns true if the stack *
// is full, or false otherwise.                     *
//***************************************************

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
//****************************************************
// Member function isEmpty returns true if the stack *
// is empty, or false otherwise.                     *
//****************************************************
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


