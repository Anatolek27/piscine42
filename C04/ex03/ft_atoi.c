#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str)
{
	int m;
	int nb; 
	int i;
	
	i = 0;
	m = 0;
	nb = 0;
	while(str[i] == ' ' || str[i] == '\n' || str[i] == '\v' || str[i] == '\t' || str[i] == '\f')
	{
		i++;
	}
	while(str[i] == 45 || str[i] == 43)
	{
		if(str[i] == 45)
			m++;
		i++;
	}
	while((str[i]) && (str[i] > 47 && str[i] < 58))
	{
		nb = nb * 10 + (str[i] - 48);
		i++;
	}
	if(m % 2 == 1)
		nb = -nb;
	return(nb);
}

int main(int argc, char **argv)
{
	(void)argc;

	printf("%d\n", atoi(argv[1]));
	printf("%d\n", ft_atoi(argv[1]));
	return(0);
}
