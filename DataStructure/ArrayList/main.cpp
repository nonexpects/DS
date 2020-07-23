#include <iostream>
#include <random>
#include "ArrayList.h"
#include "time.h"

#define POSLENGTH 8

using namespace std;

int main(void)
{
	srand(time(NULL));

	List list;
	Point comPos;
	Point* pPos;

	//����Ʈ �ʱ�ȭ
	ListInit(&list);

	for (int i = 0; i < POSLENGTH; i++)
	{
		pPos = (Point*)malloc(sizeof(Point));
		//������ ������ ����(����)
		SetPoint(pPos, rand() % POSLENGTH , rand() % POSLENGTH);
		//������ ����
		LInsert(&list, pPos);
	}
	
	//���� ������ ���
	CheckAllData(&list);

	//comPos�� ����
	comPos.x = 0;
	comPos.y = 0;

	//=====comPos�� x���� ���� ������ ����=====//

	//ù ������ Ȯ��
	if (LFirst(&list, &pPos))
	{
		//x���� ������ 1 ��ȯ (x, y�� �� �� ���� ��쵵 ����)
		if (PointComp(pPos, &comPos) == 1 || PointComp(pPos, &comPos) == 0)
		{
			//����Ʈ���� �ش簪 ��ȯ
			pPos = LRemove(&list);
			//�޸� ����
			free(pPos);
		}

		//�ι�° ���� �����͵� Ȯ�� 
		while (LNext(&list, &pPos))
		{
			if (PointComp(pPos, &comPos) == 1 || PointComp(pPos, &comPos) == 0)
			{
				//����Ʈ���� �ش簪 ��ȯ
				pPos = LRemove(&list);
				//�޸� ����
				free(pPos);
			}
		}
	}

	//���� ���� ������ ���
	CheckAllData(&list);

	return 0;
}