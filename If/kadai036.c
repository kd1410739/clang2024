#include <stdio.h>
main()
{
	int n1, n2;
	printf("����1�H");
	scanf("%d",&n1);
	printf("����2�H");
	scanf("%d",&n2);

	if (n1 == n2)
	{
		printf("%d��%d�͓�����\n", n1, n2);
	}
	else
	{
		if (n1 > n2)
		{
			printf("%d�̂ق���%d���%d�傫��\n", n1, n2, n1 - n2);
		}
		else
		{
			printf("%d�̂ق���%d���%d������\n", n1, n2, n2 - n1);
		}
	}
}