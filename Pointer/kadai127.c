#include <stdio.h>
main()
{
	double data[] = { 10.800000,20.300000,30.600000,40.400000,50.500000 };
	double* pd, sum;
	int i;
	pd = &data;
	printf("配列の内容\n配列data[]=");
	for (i = 0, sum = 0; i < 5; i++, pd++)
	{
		printf("%f ", *pd);
		sum += *pd;
	}
	printf("\n合計=%.3f\n平均=%.3f\n", sum, sum / i);
}