#include <stdio.h>
main()
{
	int a[5][5] = { {1,2,3,4,5,},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25} };
	int c[5][5], * pa, * pc, i, j;
	pa = a, pc = c;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++,pa++,pc++)
		{
			*pc = *pa;
		}
	}
	pc = &c[4][4];
	for (i = 4; i >= 0; i--)
	{
		for (j = 4; j >= 0; j--, pc--)
		{
			printf("%3d ", *pc);
		}
		printf("\n");
	}
}