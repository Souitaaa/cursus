size_t  ft_strlen(const char  *c)
{
	size_t i ;
	i = 0 ;
	while ( c[i] )
		i++;
	return i ;
}
char *ft_strdup(const char *s1)
{
	int i ;
	char *dest ;
	i = 0 ;
	dest = malloc(sizeof(char ) * (ft_strlen(dest) + 1));
	if (!dest) 
		return NULL ;
	while (s1[i] )
	{
		dest[i] = s1[i] ;
		i++;
	}
	dest[i] = '\0' ;
	return (dest) ;	
}
