#include <stdio.h>
main()
{
	float n, m;
	printf("2つの実数値？");
	scanf("%f %f", &n, &m);
	if (n > m)
	{
		printf("大きいほうは=%f", n);
	}
	else
	{
		printf("大きいほうは=%f", m);
	}
}