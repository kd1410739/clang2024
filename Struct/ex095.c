#include <stdio.h>

struct syohin_data
{
	char name[20];
	int tanka;
};

void display1(int a);
void display2(struct syohin_data syohin);

int main(void)
{
	int a = 10;
	struct syohin_data syohin = { "�P�V�S��",50 };
	display1(a);
	display2(syohin);

	return(0);
}

void display1(int a)
{
	printf("a=%d\n", a);
	return;
}

void display2(struct syohin_data syohin)
{
	printf("syohin.name=%s syohin.tanka=%d\n", syohin.name, syohin.tanka);
	return;
}