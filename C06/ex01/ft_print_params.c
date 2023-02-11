#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_params(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int main(int argc, char **argv)
{
	int n;

	n = 1;
	while(n < argc)
	{
		ft_print_params(argv[n]);
		n++;
		ft_putchar('\n');
	}
	return(0);
}
