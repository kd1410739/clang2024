#include <stdio.h>
main()
{
	int data[] = { 10,20,30,40,50,60,70,80,-999 };
	int i;
	int* pdata;
	pdata = data;
	printf("ポインタを固定で表示\n");
	printf("配列data[]=");
	for (i = 0; *(pdata+i) != -999; i++)
	{
		printf("%d ", *(pdata+i));
	}
	printf("\nポインタを変化させて表示\n");
	printf("配列data[]=");
	for (pdata=data; *(pdata) != -999; pdata++)
	{
		printf("%d ",*pdata);
	}
}