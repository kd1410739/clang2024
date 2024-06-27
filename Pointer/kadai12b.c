#include <stdio.h>
main()
{
	int a[] = { 3,5,7,9,11,13,15,17,19,21,0 };
	int b[] = { 4,8,12,16,20,24,28,32,38,42,0 };
	int* pa, * pb, i;
	pa = &a;
	printf("実行前\n");
	printf("配列a[]=");
	for (i = 0; *pa != 0; i++, pa++)
	{
		printf("%d ", *pa);
	}
	printf("\n実行後\n");
	printf("配列a[]=");
	pa = a,pb = b;
	for (i = 0; *pa != 0; i++, pa++)
	{
		printf("%d ", *pa);
		if (*pa == 21)
		{
			for (i = 0; *pb != 0; i++,pb++)
			{
				printf("%d ", *pb);
			}
		}
	}

}