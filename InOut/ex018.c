#include <stdio.h>

main()
{
	int n1, n2, n3,n;
	printf("������3����:" );
	scanf("%d%d%d", &n1, &n2, &n3);
	n = n1 + n2 + n3;
	printf("���v=%d  ����=%.2f\n", n, n / 3.0);
}