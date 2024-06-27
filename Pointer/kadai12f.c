#include <stdio.h>
main()
{
	int a[5][5] = { {1,2,3,4,5,},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25} };
	int b[5][5] = { {3,6,9,12,15},{18,21,24,27,30},{33,36,39,42,45},{48,51,54,57,60},{63,66,69,72,75} };
	int wk[5][5], * pa, * pb, * pwk, i, j;
	pa = &a, pb = &b, pwk = &wk;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++, pa++, pb++, pwk++)
		{
			*pwk = *pa;
			*pa = *pb;
			*pb = *pwk;
		}
	}
	printf("”z—ña\n");
	pa = &a;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++, pa++)
		{
			printf("%3d", *pa);
		}
		printf("\n");
	}
	printf("”z—ñb\n");
	pb = &b;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++, pb++)
		{
			printf("%3d", *pb);
		}
		printf("\n");
	}


}