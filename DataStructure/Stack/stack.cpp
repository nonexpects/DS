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
		cout << "stack�� �� á���ϴ�\n";
		return;
	}

	top++;
	arr[top] = data;
}

Data stack::Pop()
{
	if (IsEmpty())
	{
		cout << "stack�� ������ϴ�\n";
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
		cout << "stack�� ������ϴ�\n";
		return 0;
	}

	return arr[top];
}
