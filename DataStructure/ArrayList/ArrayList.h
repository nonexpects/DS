#pragma once
#include <iostream>
#define LENGTH 100

typedef struct point
{
	int x;
	int y;
}Point;

//Data 타입 지정
typedef Point* LData;

typedef struct ArrayList
{
	LData arr[LENGTH] = {};
	int dataCount;
	int curPos;

}List;


void ListInit(List* list);
void LInsert(List * list, LData data);

int LFirst(List* list, LData * data);
int LNext(List* list, LData * data);

LData LRemove(List* list);
int LCount(List* list);

void SetPoint(Point* pPos, int xPos, int yPos);

void ShowPointPos(Point* pPos);

int PointComp(Point* pos1, Point* pos2);

void CheckAllData(List * list);