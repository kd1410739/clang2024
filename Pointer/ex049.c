#include <stdio.h>
main()
{
	int a = 100, b;
	int* pa;
	pa = &a;
	b = *pa;
	printf("a=%d b=%d *pa=%d\n", a, b, *pa);
}