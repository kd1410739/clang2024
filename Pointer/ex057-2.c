#include <stdio.h>
main()
{
	int tbl[3][3] = { {10,20,30},{40,50,60},{70,80,90} };
	int* ptbl, i;
	ptbl = &tbl[0][1];
	printf("2�����z��tbl�̓��e\n");
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *ptbl);
		ptbl += 3;
	}
}