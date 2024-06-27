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
	strcpy(data.name, "peach");
	data.price = 300;
	data.point = 5;
	data.number = 3;
	data.total = 0;
	printf("商品名:　\t%s\n", data.name);
	printf("価格:　　\t%d円\n", data.price);
	printf("お薦め度:\t");
	for (i = 0; i < data.point; i++)
	{
		printf("★");
	}
	printf("\n個数:　　\t%d個\n", data.number);
	data.point = data.price * data.number;
	printf("金額:　　\t￥%d-\n", data.point);

	return(0);
}