#include "min.h"

void byteprint(int *byte)
{
 	int i = 7;
	unsigned char print = 0;

	while(i >= 0)
		print = print * 2 + byte[i--];
	ft_printf("%c", print);
}	