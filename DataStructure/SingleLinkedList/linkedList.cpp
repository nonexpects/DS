#include "linkedList.h"

//노드 추가
void linkedList::add(int data)
{
	//새로 추가할 노드 생성 후 초기화
	node* newNode = new node;

	newNode->data = data;
	newNode->next = NULL;
	//노드 없을 때
	if (head == NULL)
	{
		head = newNode;
		return;
	}
	//노드가 1개 있을 때
	if (head->next == NULL)
	{
		head->next = newNode;
		return;
	}
	//노드가 2개 이상일 때
	if (head->next != NULL)
	{
		node* temp;
		temp = head->next;

		//반복문 통해서 꼬리를 찾는다 (마지막 노드의 next는 NULL이면 빠져나옴)
		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		//꼬리에 새 노드를 추가한다
		temp->next = newNode;
		return;
	}
}

//노드 삭제
void linkedList::del(int data)
{
	//노드가 없을 때 (삭제 불가능하므로 메시지만 띄움)
	if (head == NULL)
	{
		cout << "노드가 비어있다" << endl;
	}
	//노드가 1개 있을 때 - 삭제하려는 데이터가 맞는지 확인 후 삭제
	if (head->next == NULL)
	{
		if (head->data == data)
		{
			cout << "노드 (" << head->data << ") 삭제" << endl;
			delete head;
			head = NULL;
		}
		//노드에 삭제하려는 데이터가 없는 경우
		else
		{
			cout << "삭제하려는 노드 (" << data << ") 가 없습니다" << endl;
		}
		return;
	}

	//노드가 2개 이상 - 같은 데이터 있을 경우 첫번째부터 삭제
	if (head->next != NULL)
	{
		node* temp;
		node* prevNode;
		temp = head->next;
		prevNode = head;

		//첫 노드 값이랑 같을 때
		if (prevNode->data == data)
		{
			cout << "노드 (" << prevNode->data << ") 삭제" << endl;
			head = head->next;
			prevNode->next = NULL;
			delete prevNode;
			return;
		}

		//두번째 노드부터 값이 같을 때
		while (temp != NULL)
		{
			//데이터가 같은지 비교 후 지우려는 노드가 가리키는 값 저장
			if (temp->data == data)
			{
				cout << "노드 (" << temp->data << ") 삭제" << endl;
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

	//노드가 여러개지만 삭제하려는 데이터가 존재하지 않을 때 메시지
	cout << "리스트에 해당데이터: " << data << "가 없음" << endl;
}

//출력
void linkedList::print()
{
	node* temp = head;
	//노드가 없을 때
	if (temp == NULL)
	{
		cout << "노드 없음" << endl;
		return;
	}
	//노드가 1개만 있을 때
	if (temp->next == NULL)
	{
		cout << temp->data << " -> NULL" << endl;
		return;
	}
	//노드가 2개 이상일 때
	while (temp != NULL)
	{
		cout << temp->data << " -> ";
		temp = temp->next;
	}

	cout << "NULL" << endl;
}
