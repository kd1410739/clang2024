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
	printf("名前を入力:");
	gets(pdata->name);
	printf("生年月日を区切って入力:");
	scanf("%d%d%d", &pdata->birth[0], &pdata->birth[1], &pdata->birth[2]);
	printf("血液型を入力:");
	scanf("%s", &pdata->blood);
	printf("%s--%d年%d月%d日生 血液型--%s型\n", pdata->name, pdata->birth[0], pdata->birth[1], pdata->birth[2], pdata->blood);

	return(0);
}