#include <stdio.h>
#define cnt 5
int tbl_gokei3(int *p);
main()
{
	int a[] = { 10,20,30,40,50 }, gokei;
	gokei = tbl_gokei4(a);
	printf("gokei=%d\n", gokei);
}

int tbl_gokei4(int *p)
{
	int	gokei = 0, i = 0;
	while (i < cnt)
	{
		gokei += *(p+i);
		i++;
	}
	return(gokei);
}