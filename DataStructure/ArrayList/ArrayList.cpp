#include "ArrayList.h"

void ListInit(List* list)
{
	(list->dataCount) = 0;
	(list->curPos) = -1;	//아무 위치도 가리키지 않음
}

void LInsert(List * list, LData data)
{
	if (list->dataCount > LENGTH)
	{
		printf("저장이 불가능합니다");
		return;
	}

	list->arr[list->dataCount] = data;
	(list->dataCount)++;
}

int LFirst(List * list, LData * data)
{
	if (!list->dataCount)
		return false;
	list->curPos = 0;
	*data = list->arr[0];
	return true;
}

int LNext(List * list, LData * data)
{
	if (list->curPos >= (list->dataCount) - 1)
		return false;
	(list->curPos)++;

	*data = list->arr[list->curPos];
	return true;
}

//배열 당긴 후 데이터 반환.
LData LRemove(List * list)
{
	int rPos = list->curPos;
	LData rData = list->arr[rPos];

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
	pPos->x = xPos;
	pPos->y = yPos;
}

void ShowPointPos(Point * pPos)
{
	printf("X 좌표 : %d, Y 좌표 : %d\n", pPos->x, pPos->y);
}

int PointComp(Point * pos1, Point * pos2)
{
	//x, y값 둘 다 같으면 0
	if (pos1->x == pos2->x && pos1->y == pos2->y)
		return 0;
	//x값이 같으면 1
	else if (pos1->x == pos2->x)
		return 1;
	//y값이 같으면 2
	else if (pos1->y == pos2->y)
		return 2;
	//두 값 다 다르면 -1
	else
		return -1;
}

void CheckAllData(List * list)
{
	//현재 데이터들 확인
	printf("현재 데이터 수 : %d\n", list->dataCount);
	
	for (int i = 0; i < list->dataCount; i++)
	{
		printf("X 좌표 : %d, Y 좌표 : %d\n", list->arr[i]->x, list->arr[i]->y);
	}
}
