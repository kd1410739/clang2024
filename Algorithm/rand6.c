#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int num, su;
	printf("�����o���܂����H\n");
	printf("(1:�O�[2:�`���L3:�p�[)<");
	scanf("%d", &num);
	printf("\n");
	srand(time(0));
	rand();
	su = rand() % 3;
	switch (num)
	{
	case 1:printf("�v���C���[�̓O�[�ł�\n");
		break;
	case 2:printf("�v���C���[�̓`���L�ł�\n");
		break;
	case 3:printf("�v���C���[�̓p�[�ł�\n");
		break;
	}
	switch (su)
	{
	case 0:printf("�R���s���[�^�[�̓O�[�ł�\n");
		break;
	case 1:printf("�R���s���[�^�[�̓`���L�ł�\n");
		break;
	case 2:printf("�R���s���[�^�[�̓p�[�ł�\n");
		break;
	}
	printf("\n");
	if (num == su+1)
	{
		printf("������\n");
	}
	else if (num == 1,su==1)
		{
			printf("�v���C���[�̏���\n");
		}
		else if (num == 1, su == 2)
			{
				printf("�R���s���[�^�[�̏����ł�\n");
			}
			else if (num == 2, su == 2)
				{
					printf("�v���C���[�̏���\n");
				}
				else if (num == 2, su == 0)
					{
						printf("�R���s���[�^�[�̏����ł�\n");
					}
					else if (num == 3, su == 0)
						{
							printf("�v���C���[�̏����ł�\n");
						}
						else if (num == 3, su == 1)
							{
								printf("�R���s���[�^�[�̏���\n");
							}
}