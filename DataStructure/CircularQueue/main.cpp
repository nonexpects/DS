#include "circularQueue.h"

int main()
{
	Queue q(5);

	q.Enqueue(20);
	q.Enqueue(30);
	q.Enqueue(40);
	q.Enqueue(50);
	q.Enqueue(60);
	q.Enqueue(70);

	while (!q.IsEmpty())
		printf("%d ", q.Dequeue());

	return 0;
}