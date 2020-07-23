#pragma once
#include <iostream>

using namespace std;

typedef int Data;

typedef struct node {
	Data data;
	node* next;
}Node;

class lQueue
{
	Node* rear;
	Node* front;

public:
	bool IsEmpty();

	void Enqueue(Data data);
	Data Dequeue();
	Data Peek();

	lQueue() : front(nullptr), rear(nullptr) {}
	~lQueue() {}
};

