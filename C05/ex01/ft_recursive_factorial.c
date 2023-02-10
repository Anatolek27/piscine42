#include <stdio.h>

int ft_recursive_factorial(int nb)
{
	int i;

	i = nb;
	if(i < 0)
		return(0);
	if(i == 0)
		return(1);
	i--;
	if (i > 0)
		nb = nb * ft_recursive_factorial(i);
	return(nb);
}

int main(void)
{
	int nb;

	nb = 1;
	printf("%d", ft_recursive_factorial(nb));
	return(0);
}
