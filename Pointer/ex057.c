#include <stdio.h>
main()
{
	int tbl[3][3] = { {10,20,30},{40,50,60},{70,80,90} };
	int* ptbl, i, j;
	ptbl = &tbl;
	printf("2�����z��tbl�̓��e\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++, ptbl++)
		{
			printf("%d ", *ptbl);
		}
		printf("\n");
	}
}