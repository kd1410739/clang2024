#include <stdio.h>
void work(int x, int y, int* sum, float* ave);

main()
{
	int a, b, sum;
	float ave;
	printf("整数を2つ入力:");
	scanf("%d%d", &a, &b);
	work(a, b, &sum, &ave);
	printf("合計は%d、平均は%.2f\n", sum, ave);
}

void work(int x, int y, int* sum, float* ave)
{
	*sum = x + y;
	*ave = (x+y) / 2.0;
	return;
}