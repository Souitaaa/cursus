char *ft_strchr( const char *s , int c )
{
	int i ;
	char *str ;
	i = 0 ;
	str = (char *)s ;
		while ( s[i] != c )
		{
			if ( str[i] == '\0' )
			{
				return NULL ;
			}
			i++;
		}
		return (str + i);
}
