#include <stdio.h> 
#include <string.h>
size_t ft_strlen( const char *s)
{
	size_t i  ;
	i = 0 ;
	while  ( s[i] )
		i++;
	return i ;
}
size_t ft_strlcat( char *restrict dst  , const char *restrict src , size_t dstsize)
{
	size_t i ;
	size_t s ;
	size_t d ;
	
	s = ft_strlen(src);
	d = ft_strlen(dst);
	i = 0 ;
	if ( dstsize == 0  )
	return ( s + d );
	else 
		while ( src[i] && (d + i) < dstsize - 1)
		{
			dst[d + i  ] = src[i];
				i++;
		}
	dst[d + i ] = '\0';
	if ( d >= dstsize )
	{
		return ( s + dstsize);
	}else
			return ( d + s );
}
