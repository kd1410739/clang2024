#include <stdio.h>
main()
{
	int a[30] = { 3,5,7,9,11,13,15,17,19,21,0 };
	int b[30] = { 4,8,12,16,20,24,28,32,38,42,0 };
	int* pa, * pb, * pc, i;
	pa = a, pb = b;
	printf("���s�O\n�z��a[]=");
	for (i = 0; *pa != 0; i++,pa++)
	{
		printf("%d ", *pa);
	}
	printf("\n�z��b[]=");
	for (i = 0; *pb != 0; i++, pb++)
	{
		printf("%d ", *pb);
	}
	pa = a, pb = b;
	for (i = 0; *pa != 0; i++, pa++, pb++)
	{
		*pc = *pa;
		*pa = *pb;
		*pb = *pc;
	}
	pa = a, pb = b;
	printf("\n���s��\n�z��a[]=");
	for (i = 0; *pa != 0; i++, pa++)
	{
		printf("%d ", *pa);
	}
	printf("\n�z��b[]=");
	for (i = 0; *pb != 0; i++, pb++)
	{
		printf("%d ", *pb);
	}
	printf("\n");
}