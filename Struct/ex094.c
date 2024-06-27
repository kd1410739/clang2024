#include <stdio.h>
#include <string.h>

struct profile
{
	char name[30];
	int birth[3];
	char blood[5];
};

int main(void)
{
	struct profile data[5];
	struct profile* pdata;
	pdata = data;
	int i;
	for (i = 0; i < 5; i++,pdata++)
	{
		printf("%dl–Ú(–¼‘O):", i + 1);
		scanf("%s", pdata->name);
		printf("%dl–Ú(¶”NŒ“ú):", i + 1);
		scanf("%d%d%d", &pdata->birth[0], &pdata->birth[1], &pdata->birth[2]);
		printf("%dl–Ú(ŒŒ‰tŒ^):", i + 1);
		scanf("%s", data[i].blood);
	}
	pdata = data;
	for (i = 0; i < 5; i++,pdata++)
	{
		if (strcmp(pdata->blood, "A") == 0)
		{
			printf("%s--%d”N%dŒ%d“ú¶‚Ü‚ê ŒŒ‰tŒ^-%sŒ^\n", pdata->name, pdata->birth[0], pdata->birth[1], pdata->birth[2], pdata->blood);
		}
	}

	return(0);
}