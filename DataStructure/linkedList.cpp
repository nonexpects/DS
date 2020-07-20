#include "linkedList.h"

void linkedList::add(int data)
{
	node* newNode = new node;

	newNode->data = data;
	newNode->next = NULL;
	if (head == NULL)
	{
		head = newNode;
		return;
	}
	if (head->next == NULL)
	{
		head->next = newNode;
		return;
	}
	if (head->next != NULL)
	{
		node* temp;
		temp = head->next;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next = newNode;
		return;
	}
}

void linkedList::del(int data)
{
	if (head->next == NULL)
	{
		if (head->data == data)
		{
			delete head;
			head = NULL;
		}
		return;
	}

	if (head->next != NULL)
	{
		node* temp;
		node* prevNode;
		temp = head->next;
		prevNode = head;

		if (prevNode->data == data)
		{
			head = head->next;
			prevNode->next = NULL;
			delete prevNode;
			return;
		}

		while (temp != NULL)
		{
			if (temp->data == data)
			{
				prevNode->next = temp->next;
				temp->next = NULL;
				delete temp;
				return;
			}
			else
			{
				prevNode = prevNode->next;
				temp = temp->next;
			}
		}
	}
}

void linkedList::remove(int index)
{

}

void linkedList::print()
{
	node* temp = head;
	if (temp == NULL)
	{
		cout << "노드 없음" << endl;
		return;
	}
	if (temp->next == NULL)
	{
		cout << temp->data << " -> NULL" << endl;
		return;
	}

	while (temp != NULL)
	{
		cout << temp->data << " -> ";
		temp = temp->next;
	}

	cout << "NULL" << endl;
}
