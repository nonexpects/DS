#include "linkedList.h"

//��� �߰�
void linkedList::add(int data)
{
	//���� �߰��� ��� ���� �� �ʱ�ȭ
	node* newNode = new node;

	newNode->data = data;
	newNode->next = NULL;
	//��� ���� ��
	if (head == NULL)
	{
		head = newNode;
		return;
	}
	//��尡 1�� ���� ��
	if (head->next == NULL)
	{
		head->next = newNode;
		return;
	}
	//��尡 2�� �̻��� ��
	if (head->next != NULL)
	{
		node* temp;
		temp = head->next;

		//�ݺ��� ���ؼ� ������ ã�´� (������ ����� next�� NULL�̸� ��������)
		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		//������ �� ��带 �߰��Ѵ�
		temp->next = newNode;
		return;
	}
}

//��� ����
void linkedList::del(int data)
{
	//��尡 ���� �� (���� �Ұ����ϹǷ� �޽����� ���)
	if (head == NULL)
	{
		cout << "��尡 ����ִ�" << endl;
	}
	//��尡 1�� ���� �� - �����Ϸ��� �����Ͱ� �´��� Ȯ�� �� ����
	if (head->next == NULL)
	{
		if (head->data == data)
		{
			cout << "��� (" << head->data << ") ����" << endl;
			delete head;
			head = NULL;
		}
		//��忡 �����Ϸ��� �����Ͱ� ���� ���
		else
		{
			cout << "�����Ϸ��� ��� (" << data << ") �� �����ϴ�" << endl;
		}
		return;
	}

	//��尡 2�� �̻� - ���� ������ ���� ��� ù��°���� ����
	if (head->next != NULL)
	{
		node* temp;
		node* prevNode;
		temp = head->next;
		prevNode = head;

		//ù ��� ���̶� ���� ��
		if (prevNode->data == data)
		{
			cout << "��� (" << prevNode->data << ") ����" << endl;
			head = head->next;
			prevNode->next = NULL;
			delete prevNode;
			return;
		}

		//�ι�° ������ ���� ���� ��
		while (temp != NULL)
		{
			//�����Ͱ� ������ �� �� ������� ��尡 ����Ű�� �� ����
			if (temp->data == data)
			{
				cout << "��� (" << temp->data << ") ����" << endl;
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

	//��尡 ���������� �����Ϸ��� �����Ͱ� �������� ���� �� �޽���
	cout << "����Ʈ�� �ش絥����: " << data << "�� ����" << endl;
}

//���
void linkedList::print()
{
	node* temp = head;
	//��尡 ���� ��
	if (temp == NULL)
	{
		cout << "��� ����" << endl;
		return;
	}
	//��尡 1���� ���� ��
	if (temp->next == NULL)
	{
		cout << temp->data << " -> NULL" << endl;
		return;
	}
	//��尡 2�� �̻��� ��
	while (temp != NULL)
	{
		cout << temp->data << " -> ";
		temp = temp->next;
	}

	cout << "NULL" << endl;
}
