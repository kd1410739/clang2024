#include <stdio.h>
main()
{
	float box[3], sum;
	int i;
	sum = 0;
	for (i = 0; i < 3; i++)
	{
		printf("実数を入力:");
		scanf("%f", &box[i]);
		sum += box[i];
	}
	printf("合計は%.2fです\n平均は%.2fです\n",sum, sum / 3);
}