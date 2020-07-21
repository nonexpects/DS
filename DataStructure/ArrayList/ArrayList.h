#pragma once
#include <iostream>
#define LENGTH 100

typedef struct point
{
	int x;
	int y;
}Point;

typedef struct ArrayList
{
	int arr[LENGTH] = {};
	Point* parr[LENGTH] = {};
	int dataCount;
	int curPos;

}List;

void ListInit(List* list);
void LInsert(List * list, int data);

int LFirst(List* list, int* data);
int LNext(List* list, int* data);

int LRemove(List* list);
int LCount(List* list);

void SetPoint(Point* pPos, int xPos, int yPos);

void ShowPointPos(Point* pPos);

int PointComp(Point* pos1, Point* pos2);