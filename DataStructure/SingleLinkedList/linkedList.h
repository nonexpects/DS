#pragma once
#include <iostream>

using namespace std;

//��� Ŭ����
class  node
{
public:
	int data;	//������(����)
	node* next;	//���� ��� ����Ű�� ������
};

//�̱۸�ũ�帮��Ʈ
class linkedList
{
	node* head;

public:
	//��� �߰�
	void add(int data);
	//��� ����
	void del(int data);
	//��� ���
	void print();

	//head ��带 NULL�� �ʱ�ȭ
	linkedList() : head(NULL) {}
	~linkedList() {}
};

