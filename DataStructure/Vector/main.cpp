#include <iostream>
#include "vector.h"

using namespace std;

int main()
{
	vector<int> vc;

	vc.push_back(20);
	vc.push_back(40);
	vc.push_back(60);
	vc.push_back(70);
	vc.push_back(80);

	cout << "������ : " << vc.size() << endl;

	vc.pop_back();

	for (int i = 0; i < vc.size(); i++)
	{
		cout << vc[i] << " ";
	}

	cout << endl;

	cout << "���Ͱ� ����ֳ���? ";
	(vc.empty()) ? cout << "��" : cout << "�ƴ�" << endl;

	cout << "���� ������ ���ڴ� " << vc.back() << endl;

	//============= ���� Ŭ���� ============//

	vc.clear();
	cout << "Ŭ����!" << endl;

	cout << "���Ͱ� ����ֳ���? ";
	(vc.empty()) ? cout << "��" : cout << "�ƴ�" << endl;

	return 0;
}