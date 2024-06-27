#include <stdio.h>
main()
{
	int a = 100, b = 200;
	int* pa, * pb,*c;
	pa = &a, pb = &b;
	printf("実行前:*pa=%d\t*pb=%d\n", *pa, *pb);
	c= pa;
	pa = pb;
	pb = c;
	printf("実行前:*pa=%d\t*pb=%d\n", *pa, *pb);
}