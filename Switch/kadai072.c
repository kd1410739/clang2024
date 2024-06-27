#include <stdio.h>
main()
{
	char moji;
	printf("アルファベット?");
	scanf("%c", &moji);
	switch (moji)
	{
	case'j':
	case'J':printf("Japan\n");
		break;
	case'f':
	case'F':printf("France\n");
		break;
	case'e':
	case'E':printf("England\n");
		break;
	default:printf("America\nAustralia\n");
	}
}