#include <stdio.h>
main()
{
	int a = 5, b = 30, wrk, * pa = &a, * pb = &b, * pwrk = &wrk;
	puts("実行前");
	printf("a=%d b=%d\n", *pa, *pb);
	pwrk = pa;
	pa = pb;
	pb = pwrk;
	printf("実行後\n");
	printf("a=%d b=%d\n", *pa, *pb);
}