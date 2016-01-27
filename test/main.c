#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	int cr;

	cr = 0;
	while (av[cr])
	{
		printf("%s\n", av[cr]);
		cr++;
	}
	return (0);
}
