#include <stdio.h>
main()
{
	int n;
	printf("0����100�܂ł̐���?");
	scanf("%d", &n);
	if (n >= 90 && n < 101)
	{
		printf("���̐��l�̔��茋�ʂ�5�ł�\n");
	}
	else
	{
		if (n >= 80 && n < 90)
		{
			printf("���̐��l�̔��茋�ʂ�4�ł�\n");
		}
		else
		{
			if (n >= 50 && n < 80)
			{
				printf("���̐��l�̔��茋�ʂ�3�ł�\n");
			}
			else
			{
				if (n >= 30 && n < 50)
				{
					printf("���̐��l�̔��茋�ʂ�2�ł�\n");
				}
				else
				{
					printf("���̐��l�̔��茋�ʂ�1�ł�\n");
				}
			}
		}
	}
}