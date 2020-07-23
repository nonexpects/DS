#include "stack.h"

bool stack::IsEmpty()
{
	return top == -1;
}

bool stack::IsFull()
{
	return top == size - 1;
}

void stack::Push(Data data)
{
	if (IsFull())
	{
		cout << "stack이 꽉 찼습니다\n";
		return;
	}

	top++;
	arr[top] = data;
}

Data stack::Pop()
{
	if (IsEmpty())
	{
		cout << "stack이 비었습니다\n";
		return 0;
	}

	Data tp = arr[top];
	top--;
	return tp;
}

Data stack::Peek()
{
	if (IsEmpty())
	{
		cout << "stack이 비었습니다\n";
		return 0;
	}

	return arr[top];
}
