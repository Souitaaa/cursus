
int ft_atoi(const char *str)
{
	int i  ;
	int signe ;
	int j ;

	i = 0 ;
	j = 0 ;
	signe = 1; 
	while (( str[i] == 32) || (str[i] >= 9 && str[i] <= 13 ))
		i++;
	if (  str[i] == '+' )
		i++;
	if ( str[i] == '-' )
	{
		signe = -1 ;
		i++;	
	}
	while (  str[i] >= '0' && str[i] <= '9' )
	{
		j = j * 10 + str[i] - 48 ;
		i++;
	}
	return ( j * signe );
}
