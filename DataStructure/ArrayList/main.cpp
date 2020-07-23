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

	//리스트 초기화
	ListInit(&list);

	for (int i = 0; i < POSLENGTH; i++)
	{
		pPos = (Point*)malloc(sizeof(Point));
		//포인터 데이터 설정(랜덤)
		SetPoint(pPos, rand() % POSLENGTH , rand() % POSLENGTH);
		//데이터 저장
		LInsert(&list, pPos);
	}
	
	//현재 데이터 출력
	CheckAllData(&list);

	//comPos값 설정
	comPos.x = 0;
	comPos.y = 0;

	//=====comPos와 x값이 같은 데이터 삭제=====//

	//첫 데이터 확인
	if (LFirst(&list, &pPos))
	{
		//x값이 같으면 1 반환 (x, y값 둘 다 같을 경우도 포함)
		if (PointComp(pPos, &comPos) == 1 || PointComp(pPos, &comPos) == 0)
		{
			//리스트에서 해당값 반환
			pPos = LRemove(&list);
			//메모리 해제
			free(pPos);
		}

		//두번째 이후 데이터들 확인 
		while (LNext(&list, &pPos))
		{
			if (PointComp(pPos, &comPos) == 1 || PointComp(pPos, &comPos) == 0)
			{
				//리스트에서 해당값 반환
				pPos = LRemove(&list);
				//메모리 해제
				free(pPos);
			}
		}
	}

	//삭제 이후 데이터 출력
	CheckAllData(&list);

	return 0;
}