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
	printf("���i��:�@\t%s\n", data.name);
	printf("���i:�@�@\t%d�~\n", data.price);
	printf("���E�ߓx:\t");
	for (i = 0; i < data.point; i++)
	{
		printf("��");
	}
	printf("\n��:�@�@\t%d��\n", data.number);
	data.point = data.price * data.number;
	printf("���z:�@�@\t��%d-\n", data.point);

	return(0);
}