#include <stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int b[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	int sum, i;
	printf("�z��a=");
	for (i = 0, sum = 0; i < 10; i++)
	{
		sum += a[i];
		printf("%d ", a[i]);
	}
	printf("\n���v=%d\t����=%d\n", sum, sum / i);
	printf("�z��b=");
	for (i = 0, sum = 0; i < 10; i++)
	{
		sum += b[i];
		printf("%d ", b[i]);
	}
	printf("\n���v=%d\t����=%d\n", sum, sum / i);

}