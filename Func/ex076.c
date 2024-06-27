#include <stdio.h>
void work(int x, int y, int* sum, float* ave);

main()
{
	int a, b, sum;
	float ave;
	printf("®”‚ğ2‚Â“ü—Í:");
	scanf("%d%d", &a, &b);
	work(a, b, &sum, &ave);
	printf("‡Œv‚Í%dA•½‹Ï‚Í%.2f\n", sum, ave);
}

void work(int x, int y, int* sum, float* ave)
{
	*sum = x + y;
	*ave = (x+y) / 2.0;
	return;
}