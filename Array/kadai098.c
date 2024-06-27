#include <stdio.h>
main()
{
	int data[] = { 10,5,23,29,2,6,3,1,70,100 };
	int i,max,min;
	max = data[0], min = data[0];
	printf("”z—ñdata=");
	for (i = 0; i < 10; i++)
	{
		if (max < data[i])
		{
			max = data[i];
		}
		if (min > data[i])
		{
			min = data[i];
		}
		printf("%d ", data[i]);
	}
	printf("\nÅ‘å’l=%d\tÅ¬’l=%d\n", max, min);
}