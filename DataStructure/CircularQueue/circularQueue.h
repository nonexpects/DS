#pragma once
#include <iostream>

typedef int Data;

using namespace std;

class Queue
{
	Data* arr;
	const int size;
	int front;
	int rear;

public:
	bool IsEmpty();
	bool IsFull();
	//다음 인덱스 반환 함수 -> 회전하게 함
	int Next(int pos);

	void Enqueue(Data data);
	Data Dequeue();
	Data Peek();

	Queue(int size) : size(size)
	{
		arr = new Data[size];
		front = rear = 0;
	}
	~Queue() { delete[] arr; }
};
