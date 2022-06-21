#pragma once
template<typename T>
class classStack
{
private:
	T *stackArray;
	int stackSize;
	int top;

public:
	classStack(int size);
	void push(T num);
	void pop(T &num);
	bool isFull();
	bool isEmpty();
};
