#include <iostream>

using namespace std;

int c = 0;

void TOH(int n, char from, char by, char to)
{
	c++;

	if (n == 1)
	{
		printf("���� ������ 1���� %c����, %c�� �ű�\n", from, to);
		return;
	}
	else
	{
		TOH(n - 1, from, by, to);
		printf("���� ū ���� %d�� %c����, %c�� �ű�\n", n, from, to);
		TOH(n - 1, by, from, to);
	}
}

int main(void)
{
	TOH(3, 'A', 'B', 'C');

	printf("�ű� Ƚ�� : %d", c);

	return 0;
}