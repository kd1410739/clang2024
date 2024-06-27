#include <stdio.h>
main()
{
	int a[30] = { 3,5,7,9,11,13,15,17,19,21,0 };
	int b[30] = { 4,8,12,16,20,24,28,32,38,42,0 };
	int* pa, * pb, i;
	pa = a, pb = b;
	printf("”z—ñb[]=");
	for (i = 0; *pa != 0; i++, pa++, pb++)
	{
		b = *pa + *pb;
		printf("%d ", b);
	}
}