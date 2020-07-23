#include "lQueue.h"

int main()
{
	lQueue lq;
	
	lq.Enqueue(20);
	lq.Enqueue(60);
	lq.Enqueue(270);
	lq.Enqueue(320);
	lq.Enqueue(10);

	while (!lq.IsEmpty())
		printf("%d ", lq.Dequeue());

	return 0;
}