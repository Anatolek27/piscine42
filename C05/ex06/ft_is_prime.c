#include <stdio.h>

int ft_is_prime(int nb)
{
	int i;

	if(nb < 0)
		nb = -nb;
	i = nb;
	while(i > 0)
	{
		if(nb % i == 0 && i != nb && i != 1)
			return(0);
		i--;
	}
	return(1);
}

int main(void)
{
	int nb;

	nb = 0;
	printf("%d\n", ft_is_prime(nb));
	return(0);
}
