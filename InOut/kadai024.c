#include <stdio.h>
main()
{
	int ia, ib;
	printf("2つの数値？");
	scanf("%d %d", &ia, &ib);
	printf("25+3=%d\n", ia + ib);
	printf("25-3=%d\n", ia - ib);
	printf("25*3=%d\n", ia * ib);
	printf("25/3=%d あまり%d\n", ia / ib, ia % ib);
}