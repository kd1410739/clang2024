#include <stdio.h>
main()
{
	int a = 100, b = 200, c;
	int *pa, *pb;
	pa = &a, pb = &b;
	printf("実行前:a=%d\tb=%d\n", a, b);
	c = *pa;
	a = *pb;
	b = c;
	printf("実行後:a=%d\tb=%d\n", a, b);
}