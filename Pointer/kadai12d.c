#include <stdio.h>
main()
{
	int b[5][5] = { {3,6,9,12,15},{18,21,24,27,30},
				  {33,36,39,42,45},{48,51,54,57,60},
				  {63,66,69,72,75} };
	int c[5][5], * pb, * pc,i,j;
	printf("”z—ñc\n");
	pb = &b, pc = &c;
	for (i = 0; i < (5 * 5); i++, pb++,pc++)
	{
		*pc = *pb;
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++, pc++)
		{
			printf("%3d ", *pc);
		}
		printf("\n");
	}
}