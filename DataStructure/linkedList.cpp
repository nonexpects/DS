#include "linkedList.h"

void linkedList::addNode(int value)
{
	node* newNode;
	memset(newNode, 0, sizeof(node));

	newNode->data = value;
	newNode->next = NULL;
	head->next = newNode;
}

void linkedList::delNode(int value)
{
}

void linkedList::print()
{
}
