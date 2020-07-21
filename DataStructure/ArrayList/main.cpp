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

	printf("현재 데이터 수 : %d\n", LCount(&list));

	if (LFirst(&list, &data))
	{
		printf("First 데이터 : %d\n", data);
		if (LNext(&list, &data))
		{
			printf("Next 데이터 : %d\n", data);
		}
	}

	return 0;
}