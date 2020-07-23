#include "circularQueue.h"

bool Queue::IsEmpty()
{
	return front == rear;
}

bool Queue::IsFull()
{
	return Next(rear) == front;
}

int Queue::Next(int pos)
{
	if (pos == size)
		return 0;
	else
		return pos + 1;
}

void Queue::Enqueue(Data data)
{
	if (IsFull())
	{
		cout << "큐가 꽉 찼습니다\n";
		return;
	}

	arr[rear] = data;
	rear = Next(rear);
}

Data Queue::Dequeue()
{
	if (IsEmpty())
	{
		cout << "큐가 비었습니다\n";
		return 0;
	}

	Data head = arr[front];
	front = Next(front);

	return head;
}

Data Queue::Peek()
{
	if (IsEmpty())
	{
		cout << "큐가 비었습니다\n";
		return 0;
	}

	return arr[front];
}
