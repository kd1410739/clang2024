#include <stdio.h>
main()
{
	double a, b, * p_a, * p_b;
	p_a = &a, p_b = &b;
	printf("ŽÀ”’l1?");
	scanf("%lf", &a);
	printf("ŽÀ”’l2?");
	scanf("%lf", &b);
	printf("‘å‚«‚¢‚Ù‚¤=");
	if (*p_a > *p_b)
	{
		printf("%f\n",*p_a);
	}
	else
	{
		printf("%f\n",*p_b);
	}
}