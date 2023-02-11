#include <unistd.h>

void ft_putchar(c)
{
	write(1, &c, 1);
}

void ft_writee(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int main(int argc, char **argv)
{
	(void)argc;

	ft_writee(argv[0]);
	return(0);
}
