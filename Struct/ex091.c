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
	printf("���O�����:");
	gets(pdata->name);
	printf("���N��������؂��ē���:");
	scanf("%d%d%d", &pdata->birth[0], &pdata->birth[1], &pdata->birth[2]);
	printf("���t�^�����:");
	scanf("%s", &pdata->blood);
	printf("%s--%d�N%d��%d���� ���t�^--%s�^\n", pdata->name, pdata->birth[0], pdata->birth[1], pdata->birth[2], pdata->blood);

	return(0);
}