#include <stdio.h>

main()
{
	char x;
	printf("小文字を入力:");
	scanf("%c", &x);
	printf("大文字に変換して %c\n", x - 0x20);
}