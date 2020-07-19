#pragma once
#include <iostream>

using namespace std;

typedef struct Node {
	int data;
	node* next;
}node;

class linkedList
{
	node* head;

public:

	void addNode(int value);
	void delNode(int value);

	void print();

	linkedList() : head(NULL) {}
	~linkedList() {}
};

