#pragma once
#include <iostream>

using namespace std;

//typedef struct Node {
//	int data;
//	node* next;
//}node;

class  node
{
public:
	int data;
	node* next;
};

class linkedList
{
	node* head = new node;
	node* front;
	node* tail;

public:
	void add(int data);
	void del(int data);
	void remove(int index);

	void print();

	linkedList() : head(NULL) {}
	~linkedList() {}
};

