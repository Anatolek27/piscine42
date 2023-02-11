#include <stdio.h>

char *ft_strdup(char *src)
{
	int i;
	char *dest = "t";

	i = 0;
	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return(dest);
}

int main(int argc, char **argv)
{
	printf("%s\n", ft_strdup(argv[1]));
	return(0);
}
