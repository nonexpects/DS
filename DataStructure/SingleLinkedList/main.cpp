#include <iostream>
#include "linkedList.h"

int main(void)
{
	linkedList lList;

	lList.add(50);
	lList.add(100);
	lList.add(150);

	lList.print();

	lList.del(100);

	lList.print();

	return 0;
}