#include <stdio.h>
main()
{
	double data[] = { 10.800000,20.300000,30.600000,40.400000,50.500000 };
	double* pd, sum;
	int i;
	pd = &data;
	printf("�z��̓��e\n�z��data[]=");
	for (i = 0, sum = 0; i < 5; i++, pd++)
	{
		printf("%f ", *pd);
		sum += *pd;
	}
	printf("\n���v=%.3f\n����=%.3f\n", sum, sum / i);
}