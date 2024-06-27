#include <stdio.h>

struct profile
{
	char name[20];
	int birth[3];
	char blood[5];
};

int main(void)
{
	struct profile data;
	struct profile* pdata;
	pdata = &data;
	printf("–¼‘O‚ð“ü—Í:");
	gets(pdata->name);
	printf("¶”NŒŽ“ú‚ð‹æØ‚Á‚Ä“ü—Í:");
	scanf("%d%d%d", &pdata->birth[0], &pdata->birth[1], &pdata->birth[2]);
	printf("ŒŒ‰tŒ^‚ð“ü—Í:");
	scanf("%s", &pdata->blood);
	printf("%s--%d”N%dŒŽ%d“ú¶ ŒŒ‰tŒ^--%sŒ^\n", pdata->name, pdata->birth[0], pdata->birth[1], pdata->birth[2], pdata->blood);

	return(0);
}