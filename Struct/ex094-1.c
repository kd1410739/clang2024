#include <stdio.h>
#include <string.h>
#define NIN 5
struct day
{
	int nen;
	int tuki;
	int hi;
};
struct profile
{
	char name[20];
	struct day date;
	char blood[5];
};
int main(void)
{
	struct profile data[NIN] = { { "AAAAA", 2000, 1, 1, "A" },{ "BBBBB", 1999, 2, 28, "B" },{ "CCCCC", 1998, 5, 1, "O" },{ "DDDDD", 1997, 12, 31, "AB"},{ "EEEEE", 1996, 2, 1, "A" } };
	struct profile* p;
	p = data;
	int i,j,k;
	char l[5];
	printf("���Ō������܂���?(1:���܂�N 2:���܂ꌎ 3:���t�^)");
	scanf("%d", &j);
	if (j == 1)
	{
		printf("���܂�N�����>");
		scanf("%d", &k);
	}
	if (j == 2)
	{
		printf("���܂ꌎ�����>");
		scanf("%d", &k);
	}
	if (j == 3)
	{
		printf("���t�^�����>");
		scanf("%s", &l);
	}
	for (i = 0; i < NIN; i++, p++)
	{
		if (j == 1)
		{
			if (p->date.nen == k)
			{
				printf("%s-- %d �N %02d �� %02d ���� ���t�^-%s�^\n",
					p->name, p->date.nen, p->date.tuki, p->date.hi, p->blood);
			}
		}
		if (j == 2)
		{
			if (p->date.tuki == k)
			{
				printf("%s-- %d �N %02d �� %02d ���� ���t�^-%s�^\n",
					p->name, p->date.nen, p->date.tuki, p->date.hi, p->blood);
			}
		}
		if (j == 3)
		{
			if (strcmp(p->date.blood, l) == 0)
			{
				printf("%s-- %d �N %02d �� %02d ���� ���t�^-%s�^\n",
					p->name, p->date.nen, p->date.tuki, p->date.hi, p->blood);
			}
		}

	}

	return(0);
}