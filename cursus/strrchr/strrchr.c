char *ft_strrchr(const char *s , int c )
{
	int i ;
	char *str ;
	str = (char *)s ;
	i = 0  ;
	while ( s[i] )
		i++;
		i--;
	while ( str[i] != c )
	{
		if ( str[i] == '\0' )
			return NULL ;
		i--;
	}
	return (str + i);
}
