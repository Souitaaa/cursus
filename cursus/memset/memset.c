#include <stdio.h>
void *ft_memset(void *b , int c , size_t len )
{
	size_t i ;
	char *str ;
	i = 0 ;
	str = (char *)b ;
	while (	len)
	{
		str[i] = (char)c ;
		i++;
	}
	return b ;
}
int main()
{
	char x[10] = "souita";
	ft_memset(x,5,5);
	printf("%s\n",x);
	int i[] ={1,2,3,4};
	ft_memset(i,5,sizeof(int)*6);
	for (int j= 0 ; j < 9 ;j++)
		printf("%d\n",i[j]);
}

