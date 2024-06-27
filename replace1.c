#include <stdio.h>
main()
{
	int a, b, c;
	a = 5, b = 3;
	c = a;
	a = b;
	b = c;
	printf("a=%d\tb=%d\n", a, b);
}