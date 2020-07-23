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

	cout << "사이즈 : " << vc.size() << endl;

	vc.pop_back();

	for (int i = 0; i < vc.size(); i++)
	{
		cout << vc[i] << " ";
	}

	cout << endl;

	cout << "벡터가 비어있나요? ";
	(vc.empty()) ? cout << "네" : cout << "아뇨" << endl;

	cout << "가장 마지막 숫자는 " << vc.back() << endl;

	//============= 벡터 클리어 ============//

	vc.clear();
	cout << "클리어!" << endl;

	cout << "벡터가 비어있나요? ";
	(vc.empty()) ? cout << "네" : cout << "아뇨" << endl;

	return 0;
}