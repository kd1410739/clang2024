#include <stdio.h>
main()
{
	int a = 100, b = 200, c;
	int *pa, *pb;
	pa = &a, pb = &b;
	printf("���s�O:a=%d\tb=%d\n", a, b);
	c = *pa;
	a = *pb;
	b = c;
	printf("���s��:a=%d\tb=%d\n", a, b);
}