#include <stdio.h>
main()
{
	char n1;
	printf("演算子を入れて:");
	scanf("%c", &n1);

	switch(n1)
	{
	case'+':printf("加算です\n");
		break;
	case'-':printf("減算です\n");
		break;
	case'*':printf("乗算です\n");
		break;
	case'/':printf("除算です\n");
		break;
	case'%':printf("あまりです\n");
		break;
	default:printf("その他です\n");
	}
}