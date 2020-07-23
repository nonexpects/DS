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
		cout << "ť�� �� á���ϴ�\n";
		return;
	}

	arr[rear] = data;
	rear = Next(rear);
}

Data Queue::Dequeue()
{
	if (IsEmpty())
	{
		cout << "ť�� ������ϴ�\n";
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
		cout << "ť�� ������ϴ�\n";
		return 0;
	}

	return arr[front];
}
