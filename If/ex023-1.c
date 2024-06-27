#include <stdio.h>
main()
{
	int h1, m1, s1;
	printf("秒数を入力:");
	scanf("%d", &s1);
	h1 = s1 / 3600;
	m1 = (s1 % 3600) / 60;
	s1 = s1 % 60;
	if (s1 > 5000) 
	{
		printf("エラーメッセージ\n");
	}
	if (s1 < 0) 
	{
		printf("マイナスはエラーです\n");

	}
	else
	{
		printf("%d時間 %d分 %d秒", h1, m1, s1);
	}
}