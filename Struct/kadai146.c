#include <stdio.h>

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
	struct fruit data[3] = { {"peach",300,5,3,0},{"grape",200,4,10,0},{"watermelon",1500,5,8,0} };
	struct fruit* pdata;
	pdata = data;
	int i, j,sum=0;
	for (i = 0; i < 3; i++,pdata++)
	{
		printf("¤•i–¼:\t%s\n", pdata->name);
		printf("‰¿Ši:\t%d‰~\t", pdata->price);
		printf("‚¨‘E‚ß“x:\t");
		for (j = 0; j < pdata->point; j++)
		{
			printf("š");
		}
		if (j >= pdata->point && j < 5)
		{
			for (; j < 5; j++)
			{
				printf("™");
			}
		}
		printf("\nŒÂ”:\t%dŒÂ\t", pdata->number);
		pdata->total = pdata->price * pdata->number;
		printf("‹àŠz:@@\t%d-\n\n", pdata->total);
	}
	pdata = data;
	for (i = 0; i < 3; i++,pdata++)
	{
		sum += pdata->total;
	}
	printf("‡Œv‹àŠz=%d-", sum);

}