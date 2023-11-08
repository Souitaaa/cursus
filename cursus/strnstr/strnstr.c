#include <stdio.h>
#include <string.h>
char *ft_strnstr( const char *haystack , const char *needle , size_t len )
{
	unsigned long i ;
	int j ;
	i = 0;
	j = 0;
	if ( needle[j] == '\0' )
		return ((char *)haystack);
	while (haystack[i])
	{
		j = 0 ;
		while ( haystack[i] == needle[j] && haystack[i] && i < len )
		{
			i++ ;
			j++ ;
		}
		if ( needle[j] == '\0')
			return ((char *)&haystack[i - j]);
				i = (i - j) + 1 ;
	}
	return NULL ;
}
int main ()
{
	printf("%s\n",ft_strnstr("souita is the best","souita",3 ));
	printf("%s",strnstr("souita is the best","souita", 3));
}
