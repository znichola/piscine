#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	**ft_split(char *str, char *charset);
char	*next_word(char *str, char *sep, char **end);
int	count_words(char *str, char *sep);

int main(int ac, char **av)
{
	char *str = av[1];
	char *sep = av[2];
	char **foo = ft_split(str, sep);

	if (ac != 3)
	{
		printf("give me some arguments you piece \n");
		return (0);
	}
	
	// char *end;
	// // (void)end;
	// printf("\ncount me:%d\n", count_words(str, sep));
	// printf("next:	\"%s\"\n", next_word(str, sep, &end));
	// printf("end:	\"%s\"\n\n", end);

	printf("tab start\n");
	int i = -1;
	do {
		i++;
		printf("tab[%d]: \"%s\"\n", i, foo[i]);
	}while(foo[i] != 0);
	// for (int i = 0; *foo[i+1] != 0; i++)
	printf("tab end\n");
	return (0);
}