#include <stdio.h>

int ft_fibonacci2(int index, int i, int n)
{
	if(index == 0)
		return(0);
	if(index == 1)
		return(1);
	if(index > 1)
	{
		return(ft_fibonacci2(index - 1, n, i + n));
	}
	return(-1);
}

int ft_fibonacci(int index)
{
	return(ft_fibonacci2(index, 0, 1));
}

int main(void)
{
	int index;

	index = 9;
	printf("%d\n", ft_fibonacci(index));
	return(0);
}
