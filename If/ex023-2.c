#include <stdio.h>
main()
{
	int n1;
	printf("西暦を入力:");
	scanf("%d", &n1);
	if (n1%4==0) 
	{
		printf("うるう年です");
	}
}