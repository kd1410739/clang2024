#include <stdio.h>
main()
{
	int a[6] = { 11,22,33,44,55,66 };
	float b[4] = { 11.1,22.2,33.3,44.4 };
	int* pa;
	float* pb;
	int sumi, i;
	float sumf;
	pa = a;
	for (i = 0, sumi = 0; i < 6; i++,pa++)
	{
		sumi += *pa;
	}
	printf("配列a 合計=%6d\t平均=%.3f\n", sumi, (float)sumi / i);
	pb = b;
	for (i = 0, sumf = 0; i < 4; i++, pb++)
	{
		sumf += *pb;
	}
	printf("配列b 合計=%.3f\t平均=%.3f\n", sumf, sumf / i);




}