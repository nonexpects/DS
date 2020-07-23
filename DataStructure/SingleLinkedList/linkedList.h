#pragma once
#include <iostream>

using namespace std;

//노드 클래스
class  node
{
public:
	int data;	//데이터(정수)
	node* next;	//다음 노드 가리키는 포인터
};

//싱글링크드리스트
class linkedList
{
	node* head;

public:
	//노드 추가
	void add(int data);
	//노드 삭제
	void del(int data);
	//노드 출력
	void print();

	//head 노드를 NULL로 초기화
	linkedList() : head(NULL) {}
	~linkedList() {}
};

