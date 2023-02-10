#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
	int n;

	n = nb;
	if(power < 0)
		return(0);
	if(power == 0)
		return(1);
	if(power == 1)
		return(nb);
	while(power > 1)
	{
		n = n * nb;
		power--;
	}
	return(n);
}

int main(void)
{
	int nb;
	int power;

	nb = 0;
	power = 23;
	printf("%d\n", ft_iterative_power(nb, power));
	return(0);
}
