#include <stdio.h>
main()
{
	char syo;
	int n1, n2, n3;
	printf("���������:");
	scanf("%c", &syo);
	printf("���������:");
	scanf("%d%d%d", &n1, &n2, &n3);
	switch (syo)
	{
	case'd':
	case'D':
		if (n1 > n2)
		{
			if (n1 > n3)
			{
				printf("�ő�l��%d�ł�\n", n1);
			}
			else
			{
				printf("�ő�l��%d�ł�\n", n3);
			}
		}
		else
		{
			if (n2 > n3)
			{
				printf("�ő�l��%d�ł�\n", n2);
			}
			else
			{
				printf("�ő�l��%d�ł�\n", n3);
			}
		}
		break;
	case's':
	case'S':
		if (n1 < n2)
		{
			if (n1 < n3)
			{
				printf("�ŏ��l��%d�ł�\n", n1);
			}
			else
			{
				printf("�ŏ��l��%d�ł�\n", n3);
			}
		}
		else
		{
			if (n2 < n3)
			{
				printf("�ŏ��l��%d�ł�\n", n2);
			}
			else
			{
				printf("�ŏ��l��%d�ł�\n", n3);
			}
		}
		break;
	case'g':
	case'G':
		printf("���v��%d", n1 + n2 + n3);
		break;
	case'h':
	case'H':
		printf("���ς�%.2f", (float)(n1 + n2 + n3) / 3);
		break;
	default:printf("�G���[\n");
	}
}