#include <stdio.h>
main()
{
	int num;
	printf("整数? ");
	scanf("%ld", &num);
	printf("2倍すると %ld\n", num * 2);
	printf("3倍すると %ld\n", num * 3);
	printf("4倍すると %ld\n", num * 4);
}