#include <stdio.h>
#include <ctype.h>
int ft_toupper(int c ) 
{
	if ( c >= 97 && c <= 122 )
	{
		c = c - 32 ;
	}
	return c ;
}
