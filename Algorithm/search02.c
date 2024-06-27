#include <stdio.h>
main()
{
	int s, i;
	int d[11] = { 10,5,30,77,16,3,47,29,37,33 };
	printf("探索値sを入力");
	scanf("%d", &s);
	d[10] = s;
	for (i = 0; s != d[i]; i++);
	if (i == 10)
	{
		printf("入力データ%dは見つからなかった\n", s);
	}
	else
	{
		printf("入力データ%dは%d番目に見つかった\n", s, i);
	}
}