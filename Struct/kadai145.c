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
	struct fruit data[3] = {{"peach",300,5,3,0},{"grape",200,4,10,0},{"watermelon",1500,5,8,0}};
	int i,j,sum;
	for (i = 0; i < 3; i++)
	{
		printf("���i��:\t%s\n", data[i].name);
		printf("���i:\t%d�~\t", data[i].price);
		printf("���E�ߓx:\t");
		for (j = 0; j < data[i].point; j++)
		{
			printf("��");
		}
		if (j >= data[i].point && j < 5)
		{
			for (;j < 5; j++)
			{
				printf("��");
			}
		}
		printf("\n��:\t%d��\t", data[i].number);
		data[i].total = data[i].price * data[i].number;
		printf("���z:�@�@\t��%d-\n\n", data[i].total);
	}
	sum = 0;
	for (i = 0; i < 3; i++)
	{
		sum += data[i].total;
	}
	printf("���v���z=��%d-", sum);

	return(0);
}