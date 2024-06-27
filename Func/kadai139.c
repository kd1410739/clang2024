#include<stdio.h>
void kae(int num, char moji);

main()
{
	char moji;
	int num;
	printf("•¶šH:");
	scanf("%c", &moji);
	printf("®”?");
	scanf("%*c%d", &num);
	kae(num, moji);
}

void kae(int num, char moji)
{
	int i;
	for (i = 0; i < num; i++)
	{
		printf("%c", moji);
	}
	return;
}