#include <stdio.h>
#include <string.h>

struct fruit
{
	char name[30];
	int price;
	int point;
	int number;
	int total;
};

int main(void)
{
	int i;
	struct fruit data;
	struct fruit* pdata;
	pdata = &data;
	strcpy(pdata->name, "peach");
	pdata->price = 300;
	pdata->point = 5;
	pdata->number = 3;
	pdata->total = 0;
	printf("���i��:�@\t%s\n", pdata->name);
	printf("���i:�@�@\t%d�~\n", pdata->price);
	printf("���E�ߓx:\t");
	for (i = 0; i < pdata->point; i++)
	{
		printf("��");
	}
	printf("\n��:�@�@\t%d��\n", pdata->number);
	pdata->point = pdata->price * pdata->number;
	printf("���z:�@�@\t��%d-\n", pdata->point);

	return(0);

}