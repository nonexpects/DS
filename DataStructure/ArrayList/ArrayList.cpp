#include "ArrayList.h"

void ListInit(List* list)
{
	(list->dataCount) = 0;
	(list->curPos) = -1;	//아무 위치도 가리키지 않음
}

void LInsert(List * list, int data)
{
	if (list->dataCount > LENGTH)
	{
		printf("저장이 불가능합니다");
		return;
	}

	list->arr[list->dataCount] = data;
	(list->dataCount)++;
}

int LFirst(List * list, int* data)
{
	if (!list->dataCount)
		return false;
	list->curPos = 0;
	*data = list->arr[0];
	return true;
}

int LNext(List * list, int* data)
{
	if (list->curPos >= (list->dataCount) - 1)
		return false;
	(list->curPos)++;

	*data = list->arr[list->curPos];
	return true;
}

//배열 당긴 후 데이터 반환.
int LRemove(List * list)
{
	int rPos = list->curPos;
	int rData = list->arr[rPos];

	for (int i = rPos; i < list->dataCount - 1; i++)
	{
		list->arr[i] = list->arr[i + 1];
	}
	(list->curPos)--;
	(list->dataCount)--;

	return rData;
}

int LCount(List * list)
{
	return list->dataCount;
}

void SetPoint(Point * pPos, int xPos, int yPos)
{
	Point* newPoint;
	newPoint->x = xPos;
	newPoint->y = yPos;
	pPos = newPoint;
}

void ShowPointPos(Point * pPos)
{
	printf("X 좌표 : %d, Y 좌표 : %d\n", pPos->x, pPos->y);
}

int PointComp(Point * pos1, Point * pos2)
{
	if (pos1->x == pos2->x && pos1->y == pos2->y)
		return 0;
	else if (pos1->x == pos2->x)
		return 1;
	else if (pos1->y == pos2->y)
		return 2;
	else
		return -1;
}
