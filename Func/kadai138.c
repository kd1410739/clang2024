#include <stdio.h>
void kigou(int num);
main()
{
	int num;
	printf("®”?");
	scanf("%d", &num);
	kigou(num);
}

void kigou(int num)
{
	int i;
	for (i = 0; i < num; i++)
	{
		printf("*");
	}
	return;
	

}