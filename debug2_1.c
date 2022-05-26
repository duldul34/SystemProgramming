#include <stdio.h>
int a, b;

void swap()
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

main()
{
	a = 10;
	b = 50;
	printf("before swap: %d %d\n", a, b);
	swap();
	printf("after swap: %d %d\n", a, b);
}
