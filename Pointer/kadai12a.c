#include <stdio.h>
main()
{
	int a[30] = { 3,5,7,9,11,13,15,17,19,21,0 };
	int b[30] = { 4,8,12,16,20,24,28,32,38,42,0 };
	int* pa, * pb, i;
	pa = a, pb = b;
	printf("実行前\n配列a[]=");
	for (i = 0; *pa != 0; i++, pa++)
	{
		printf("%d ", *pa);
	}
	printf("\n配列b[]=");
	for (i = 0; *pb != 0; i++, pb++)
	{
		printf("%d ", *pb);
	}
	printf("\n実行後\n");
	pa = a;
	printf("\n実行後\n配列a[]=");
	for (i = 0; *pa != 0; i++, pa++)
	{
		printf("%d ", *pa);
	}
	printf("\n配列b[]=");
	pb = b, pa--;
	for (i = 0; i < 10; i++, pb++, pa--)
	{
		pb = pa;
		printf("%d ", *pb);
	}
}