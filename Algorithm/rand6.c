#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int num, su;
	printf("何を出しますか？\n");
	printf("(1:グー2:チョキ3:パー)<");
	scanf("%d", &num);
	printf("\n");
	srand(time(0));
	rand();
	su = rand() % 3;
	switch (num)
	{
	case 1:printf("プレイヤーはグーです\n");
		break;
	case 2:printf("プレイヤーはチョキです\n");
		break;
	case 3:printf("プレイヤーはパーです\n");
		break;
	}
	switch (su)
	{
	case 0:printf("コンピューターはグーです\n");
		break;
	case 1:printf("コンピューターはチョキです\n");
		break;
	case 2:printf("コンピューターはパーです\n");
		break;
	}
	printf("\n");
	if (num == su+1)
	{
		printf("あいこ\n");
	}
	else if (num == 1,su==1)
		{
			printf("プレイヤーの勝ち\n");
		}
		else if (num == 1, su == 2)
			{
				printf("コンピューターの勝ちです\n");
			}
			else if (num == 2, su == 2)
				{
					printf("プレイヤーの勝ち\n");
				}
				else if (num == 2, su == 0)
					{
						printf("コンピューターの勝ちです\n");
					}
					else if (num == 3, su == 0)
						{
							printf("プレイヤーの勝ちです\n");
						}
						else if (num == 3, su == 1)
							{
								printf("コンピューターの勝ち\n");
							}
}