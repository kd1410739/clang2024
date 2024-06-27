#include <stdio.h>
main()
{
	char syo;
	int n1, n2, n3;
	printf("処理を入力:");
	scanf("%c", &syo);
	printf("整数を入力:");
	scanf("%d%d%d", &n1, &n2, &n3);
	switch (syo)
	{
	case'd':
	case'D':
		if (n1 > n2)
		{
			if (n1 > n3)
			{
				printf("最大値は%dです\n", n1);
			}
			else
			{
				printf("最大値は%dです\n", n3);
			}
		}
		else
		{
			if (n2 > n3)
			{
				printf("最大値は%dです\n", n2);
			}
			else
			{
				printf("最大値は%dです\n", n3);
			}
		}
		break;
	case's':
	case'S':
		if (n1 < n2)
		{
			if (n1 < n3)
			{
				printf("最小値は%dです\n", n1);
			}
			else
			{
				printf("最小値は%dです\n", n3);
			}
		}
		else
		{
			if (n2 < n3)
			{
				printf("最小値は%dです\n", n2);
			}
			else
			{
				printf("最小値は%dです\n", n3);
			}
		}
		break;
	case'g':
	case'G':
		printf("合計は%d", n1 + n2 + n3);
		break;
	case'h':
	case'H':
		printf("平均は%.2f", (float)(n1 + n2 + n3) / 3);
		break;
	default:printf("エラー\n");
	}
}