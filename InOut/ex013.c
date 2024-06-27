#include <stdio.h>

main()
{
	char m1,m2;
	m1 = '5', m2 = '6';
	printf("%cx%c=%d \n", m1,m2,(m1-'0')*(m2-'0'));
}