#include <stdio.h>

main()
{
	int n;
	printf("西暦を入力:");
	scanf("%d", &n);
	if (n <= 1988) {
		printf("昭和生まれです");
	}
	else {
		printf("平成生まれです");
	}
}