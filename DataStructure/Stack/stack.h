#pragma once
#include <iostream>

typedef int Data;

using namespace std;

class stack
{
	Data* arr;
	const int size;
	int top;
public:

	bool IsEmpty();
	bool IsFull();

	void Push(Data data);
	Data Pop();
	Data Peek();

	stack(int size) : size(size)
	{
		arr = new Data[size];
		top = -1;
	}
	~stack() { delete[] arr; }
};

