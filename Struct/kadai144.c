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
	printf("商品名:　\t%s\n", pdata->name);
	printf("価格:　　\t%d円\n", pdata->price);
	printf("お薦め度:\t");
	for (i = 0; i < pdata->point; i++)
	{
		printf("★");
	}
	printf("\n個数:　　\t%d個\n", pdata->number);
	pdata->point = pdata->price * pdata->number;
	printf("金額:　　\t￥%d-\n", pdata->point);

	return(0);

}