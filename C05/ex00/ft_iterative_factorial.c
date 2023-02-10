#include <stdio.h>

int ft_iterative_factorial(int nb)
{
	int i;

	i = nb - 1;
	if(nb < 0)
		return(0);
	if(nb < 2)
		return(1);
	while(i > 0)
	{
		nb = nb * i;
		i--;
	}
	return(nb);
}

int main(void)
{
	int nb;

	nb = 1;
	printf("%d\n", ft_iterative_factorial(nb));
	return(0);
}
