#pragma once
#include <iostream>
#define LENGTH 100

typedef struct ArrayList
{
	int arr[LENGTH];
	int dataCount;
	int curPos;

}List;

void ListInit(List* list);
void LInsert(List * list, int data);

int LFirst(List* list, int data);
int LNext(List* list, int data);

int LRemove(List* list);
int LCount(List* list);