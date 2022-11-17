#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_str_len(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

void	int_to_base(int num, char *numbas)
{
	// char	numbas[] = "0123456789";

	int base = ft_str_len(numbas);

	if (num < base)
	{
		write(1, &numbas[num], 1);
		return ;
	}
	int_to_base(num / base, numbas);
	int_to_base(num % base, numbas);
}


int main(int ac, char **av)
{
	int_to_base(atoi(av[1]), av[2]);
	return (0);
}