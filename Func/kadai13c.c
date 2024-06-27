#include <stdio.h>
void irekae(int *x, int *y);

main()
{
	int a, b;
	a = 10, b = 20;
	printf("関数実行前の値:\n");
	printf("a=%d\tb=%d\n", a, b);
	irekae(&a, &b);
	printf("関数実行後の値:\n");
	printf("a=%d\tb=%d\n", a, b);
}

void irekae(int *x, int *y)
{
	int w;
	w = *x;
	*x = *y;
	*y = w;
	return;
}