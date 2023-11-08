#include <stdio.h>
#include <string.h>
size_t ft_strlen(const char *s)
{
	size_t i ;
	i = 0 ;
	while ( s[i] )
	i++;
	return i ;
}
size_t ft_strlcpy( char * restrict dst , const char * restrict src , size_t dstsize)
{
	size_t i ;
	int a ;
	
	i = 0;
	a = ft_strlen(src) ;
	if (dstsize != 0 )
	{
		while (( src[i] != '\0' ) && (dstsize - 1 > i ))
		{
			dst[i] = src[i] ;
			i++;
		}
	}
	return a ;
}
int main ()
{
	char a[] = "souita";
	char b[] = "charaf";
	printf("%zu\n",ft_strlcpy(a,b,3));
	printf("%lu",strlcpy(a,b,3));
}
