#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int num,ran, i;
	srand(time(0));
	rand();
	ran = rand() % 100+1;
	printf("数あてゲーム\n");
	printf("1〜100までの数を当てるゲーム\n");
	for (num = 0, i = 1; ran != num; i++)
	{
		printf("数(1〜100)を入力:");
		scanf("%d", &num);
		if (num < ran)
		{
			printf("%dより大きいです\n", num);
		}
		else if (num > ran)
			{
				printf("%dより小さいです\n", num);
			}
			else
			{
				printf("あたり%d回目で当てました\n", i);
			}
		}
	}
}