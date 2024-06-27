#include <stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int c[10], i,j;
	printf("”z—ña=");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	for (j = 9,i=0;i<10; j--,i++)
	{
		c[j] = a[i];
	}
	printf("\n”z—ñc=");
	for (j = 0; j < 10; j++)
	{
		printf("%d ", c[j]);
	}
}