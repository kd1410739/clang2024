#include <stdio.h>
#include <string.h>
#define CNT 3

int NUM = CNT;

struct animal
{
	int no;
	char name[20];
	char color[10];
};

void display(struct animal *pdata);
void add(struct animal *pdata);
void search(struct animal *pdata);

int main(void)
{
	char judge[10];
	int i;
	struct animal data[50] = { {30,"dog","white"},{50,"tiger","yellow"},{60,"horse","brown"} };
	struct animal* pdata = data;
	//�������j���[
	while (1)
	{
		printf("�������j���[(X�̓��͂ŏI�����܂�)\n");
		printf("1:�f�[�^�\��	2:�f�[�^�ǉ�	3:�f�[�^����	������?:");
		scanf("%s", judge);
		if (strcmp(judge, "1") == 0)
		{
			display(pdata);
		}
		else if (strcmp(judge, "2") == 0)
		{
			add(pdata);
		}
		else if (strcmp(judge, "3") == 0)
		{
			search(pdata);
		}
		else if (strcmp(judge, "X") == 0)
		{
			break;
		}
		else
		{
			printf("���̓G���[\n���͂�X����1�`3�ɂ��Ă�������\n");
		}
	}
	
	return(0);
}
//�\������
void display(struct animal *pdata)
{
	int i;
	for (i = 0; i < NUM; i++)
	{
		printf("�ԍ�:%d\t\t", (pdata+i)->no);
		printf("���O:%s\t", (pdata + i)->name);
		printf("�F:%s\n", (pdata + i)->color);
	}
	return;
}
//�ǉ�����
void add(struct animal *pdata)
{
	int i;
	for (i = 0; i < NUM; i++,pdata++);
	printf("�f�[�^�̒ǉ����s���̂œ��͂��Ă�������\n");
	printf("�ԍ�>");
	scanf("%d",&pdata->no);
	printf("���O>");
	scanf("%s",&pdata->name);
	printf("�F>");
	scanf("%s",&pdata->color);

	NUM++;
	return;
}
//��������
void search(struct animal *pdata)
{
	int i,num,no;
	char name[256], color[256];
	printf("�o�^����Ă���f�[�^�̌������s���܂�\n");
	printf("��������(1:�ԍ� 2:���O 3:�F)>");
	scanf("%d", &num);
	switch (num)
	{
	case 1:printf("��������ԍ�>");
		scanf("%d", &no);
		printf("��������\n");
		for (i = 0; i < NUM; i++)
		{
			if (no == (pdata + i)->no)
			{
				printf("�ԍ�:%d\t���O:%s\t�F:%s\n", pdata->no, pdata->name, pdata->color);
			}
		}
		break;
	case 2:printf("�������閼�O>");
		scanf("%s", &name);
		printf("��������\n");
		for (i = 0; i < NUM; i++, pdata++)
		{
			if (strcmp(name,  (pdata + i) ->name) == 0)
			{
				printf("�ԍ�:%d\t���O:%s\t�F:%s\n", pdata->no, pdata->name, pdata->color);
			}
		}
		break;
	case 3:printf("��������F>");
		scanf("%s", &color);
		printf("��������\n");
		for (i = 0; i < NUM; i++,pdata++)
		{
			if (strcmp(color, (pdata + i) ->color) == 0)
			{
				printf("�ԍ�:%d\t���O:%s\t�F:%s\n", pdata->no, pdata->name, pdata->color);
			}
		}
		break;
	default:printf("�G���[\n1�`3����͂��Ă�������\n");
	}

	return;
}