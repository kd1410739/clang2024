#include <stdio.h>
main()
{
	double a, b, * p_a, * p_b;
	p_a = &a, p_b = &b;
	printf("実数値1?");
	scanf("%lf", &a);
	printf("実数値2?");
	scanf("%lf", &b);
	printf("大きいほう=");
	if (*p_a > *p_b)
	{
		printf("%f\n",*p_a);
	}
	else
	{
		printf("%f\n",*p_b);
	}
}