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
	printf("‰½‚ÅŒŸõ‚µ‚Ü‚·‚©?(1:¶‚Ü‚ê”N 2:¶‚Ü‚êŒŽ 3:ŒŒ‰tŒ^)");
	scanf("%d", &j);
	if (j == 1)
	{
		printf("¶‚Ü‚ê”N‚ð“ü—Í>");
		scanf("%d", &k);
	}
	if (j == 2)
	{
		printf("¶‚Ü‚êŒŽ‚ð“ü—Í>");
		scanf("%d", &k);
	}
	if (j == 3)
	{
		printf("ŒŒ‰tŒ^‚ð“ü—Í>");
		scanf("%s", &l);
	}
	for (i = 0; i < NIN; i++, p++)
	{
		if (j == 1)
		{
			if (p->date.nen == k)
			{
				printf("%s-- %d ”N %02d ŒŽ %02d “ú¶ ŒŒ‰tŒ^-%sŒ^\n",
					p->name, p->date.nen, p->date.tuki, p->date.hi, p->blood);
			}
		}
		if (j == 2)
		{
			if (p->date.tuki == k)
			{
				printf("%s-- %d ”N %02d ŒŽ %02d “ú¶ ŒŒ‰tŒ^-%sŒ^\n",
					p->name, p->date.nen, p->date.tuki, p->date.hi, p->blood);
			}
		}
		if (j == 3)
		{
			if (strcmp(p->date.blood, l) == 0)
			{
				printf("%s-- %d ”N %02d ŒŽ %02d “ú¶ ŒŒ‰tŒ^-%sŒ^\n",
					p->name, p->date.nen, p->date.tuki, p->date.hi, p->blood);
			}
		}

	}

	return(0);
}