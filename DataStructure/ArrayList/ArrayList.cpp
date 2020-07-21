#include "ArrayList.h"

void ListInit(List* list)
{
	(list->dataCount) = 0;
	(list->curPos) = -1;	//�ƹ� ��ġ�� ����Ű�� ����
}

void LInsert(List * list, int data)
{
	if (list->dataCount > LENGTH)
	{
		printf("������ �Ұ����մϴ�");
		return;
	}

	list->arr[list->dataCount] = data;
	(list->dataCount)++;
}

int LFirst(List * list, int data)
{
	if (!list->dataCount)
		return false;
	list->curPos = 0;
	data = list->arr[0];
	return true;
}

int LNext(List * list, int data)
{
	if (list->curPos >= (list->dataCount) - 1)
		return false;
	(list->curPos)++;

	data = list->arr[list->curPos];
	return true;
}

int LRemove(List * list)
{
	return 0;
}

int LCount(List * list)
{
	return 0;
}
