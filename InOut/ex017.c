#include <stdio.h>

main()
{
	float n1, n2, n3;
	printf("1�ڂ̎���:");
	scanf("%f", &n1);
	printf("2�ڂ̎���:");
	scanf("%f", &n2);
	printf("3�ڂ̎���:");
	scanf("%f", &n3);
	printf("���v=%.2f ����=%.2f\n", n1 + n2 + n3, (n1 + n2 + n3) / 3);
}
