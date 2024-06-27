#include <stdio.h>
main()
{
	int tbl[3][3] = { {10,20,30},{40,50,60},{70,80,90} };
	int* ptbl, i;
	ptbl = &tbl[1];
	printf("2ŽŸŒ³”z—ñtbl‚Ì“à—e\n");
	for (i = 3; i < 6; i++,ptbl++)
	{
		printf("%d ", *ptbl);
	}
}