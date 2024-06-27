#include <stdio.h>

int main(void)
{
	FILE* fp;
	char str[256],equip[256];
	int i,lv,hp;
	fp = fopen("file02.txt", "r");
	for (i = 0; i < 3; i++)
	{
		fscanf(fp, "%s", str);
		printf("%d:%s\n", i, str);
	}
	fscanf(fp, "%d%d%s", &lv, &hp, equip);
	printf("lv:%d hp:%d ‘•”õ:%s\n", lv, hp, equip);
	fclose(fp);

	return;
}