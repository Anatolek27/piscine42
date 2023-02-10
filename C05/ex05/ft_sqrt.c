#include <stdio.h>

int ft_sqrt(int nb)
{
	int i;

	i = 0;
	if(nb == 1)
		return(1);
	while(i <= nb / 2)
	{
		if(i*i == nb)
			return(i);
		else
			i++;
	}
	return(0);
}

int main(void)
{
	int nb;

	nb = -231;
	printf("%d\n", ft_sqrt(nb));
}
