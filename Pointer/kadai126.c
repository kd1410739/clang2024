#include <stdio.h>
main()
{
	int data[10] = { 10,9,1,20,45,21,38,45,88 };
	int* pdata, max, min,i;
	pdata = data;
	max = *pdata, min = *pdata;
	printf("�z��̓��e\n");
	printf("data[]=");
	for (i = 0; i < 9; i++,pdata++)
	{
		printf("%d ", *pdata);
		if (max < *pdata)
		{
			max = *pdata;
		}
		if (min > *pdata)
		{
			min = *pdata;
		}
	}
	printf("\n�ő�l=%d\n", max);
	printf("�ŏ��l=%d\n", min);


}