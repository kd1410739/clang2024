#include <stdio.h>
main()
{
	int a = 5, b = 30, wrk, * pa = &a, * pb = &b, * pwrk = &wrk;
	puts("���s�O");
	printf("a=%d b=%d\n", *pa, *pb);
	pwrk = pa;
	pa = pb;
	pb = pwrk;
	printf("���s��\n");
	printf("a=%d b=%d\n", *pa, *pb);
}