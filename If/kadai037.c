#include <stdio.h>
main()
{
	int n;
	printf("0から100までの整数?");
	scanf("%d", &n);
	if (n >= 90 && n < 101)
	{
		printf("その数値の判定結果は5です\n");
	}
	else
	{
		if (n >= 80 && n < 90)
		{
			printf("その数値の判定結果は4です\n");
		}
		else
		{
			if (n >= 50 && n < 80)
			{
				printf("その数値の判定結果は3です\n");
			}
			else
			{
				if (n >= 30 && n < 50)
				{
					printf("その数値の判定結果は2です\n");
				}
				else
				{
					printf("その数値の判定結果は1です\n");
				}
			}
		}
	}
}