#include <iostream>
#include "ArrayList.h"

using namespace std;

int main(void)
{
	List list;
	int data;
	ListInit(&list);

	LInsert(&list, 11);
	LInsert(&list, 11);
	LInsert(&list, 22);
	LInsert(&list, 22);
	LInsert(&list, 33);
	LInsert(&list, 33);

	printf("���� ������ �� : %d\n", LCount(&list));

	if (LFirst(&list, &data))
	{
		printf("First ������ : %d\n", data);
		if (LNext(&list, &data))
		{
			printf("Next ������ : %d\n", data);
		}
	}

	return 0;
}