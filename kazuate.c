#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int num,ran, i;
	srand(time(0));
	rand();
	ran = rand() % 100+1;
	printf("�����ăQ�[��\n");
	printf("1�`100�܂ł̐��𓖂Ă�Q�[��\n");
	for (num = 0, i = 1; ran != num; i++)
	{
		printf("��(1�`100)�����:");
		scanf("%d", &num);
		if (num < ran)
		{
			printf("%d���傫���ł�\n", num);
		}
		else if (num > ran)
			{
				printf("%d��菬�����ł�\n", num);
			}
			else
			{
				printf("������%d��ڂœ��Ă܂���\n", i);
			}
		}
	}
}