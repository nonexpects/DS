#include "lQueue.h"

bool lQueue::IsEmpty()
{
	return front == nullptr;
}

void lQueue::Enqueue(Data data)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;
	newNode->next = nullptr;

	if (IsEmpty())
	{
		front = newNode;
		rear = newNode;
	}
	else
	{
		rear->next = newNode;
		rear = newNode;
	}
}

Data lQueue::Dequeue()
{
	if (IsEmpty())
	{
		printf("Queue가 비었습니다\n");
		return 0;
	}
	else
	{
		Node* delNode = front;
		Data dq = front->data;
		front = front->next;

		free(delNode);
		return dq;
	}
}

Data lQueue::Peek()
{
	if (IsEmpty())
	{
		printf("Queue가 비었습니다\n");
		return 0;
	}

	return front->data;
}
