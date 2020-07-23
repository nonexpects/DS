#include "stack.h"

int main()
{
	stack s(10);

	s.Push(20);
	s.Push(10);
	s.Push(50);
	s.Push(60);
	s.Push(80);

	while (!s.IsEmpty())
	{
		printf("%d ", s.Pop());
	}

	return 0;
}