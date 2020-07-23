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
	//���� �ε��� ��ȯ �Լ� -> ȸ���ϰ� ��
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
