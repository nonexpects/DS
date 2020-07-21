#include <iostream>

using namespace std;

int c = 0;

void TOH(int n, char from, char by, char to)
{
	c++;

	if (n == 1)
	{
		printf("원반 마지막 1개를 %c에서, %c로 옮김\n", from, to);
		return;
	}
	else
	{
		TOH(n - 1, from, by, to);
		printf("가장 큰 원반 %d를 %c에서, %c로 옮김\n", n, from, to);
		TOH(n - 1, by, from, to);
	}
}

int main(void)
{
	TOH(3, 'A', 'B', 'C');

	printf("옮긴 횟수 : %d", c);

	return 0;
}