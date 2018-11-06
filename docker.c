#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while(s[i] != '\0')
	{
		ft_putchar(s[i]);
		i++;
	}
}


int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putstr("\033[31m");
		ft_putstr("Only one param");
		ft_putstr("\033[0m\n");
		return (-1);
	}
	ft_putstr("\033[31m");
	ft_putstr(argv[1]);
	ft_putstr("\033[0m\n");
	return (0);
}
