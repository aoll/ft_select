#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <string.h>

void	ft_p(char **str)
{
	char *s;

	
	s = strdup("salut");
	*str = s;
	return ;
}

void	ft_l(void)
{
	char *s;

	printf("%p\n", &s);
	ft_p(&s);
	printf("%s\n", s);
	printf("%p\n", &s);
	free(s);
	s = NULL;
	return ;
}

int	main(void)
{
	int cr;

	cr = 0;
	ft_l();
	while (cr < 10)
	{
		printf("%d\n", cr);
		cr++;
	}
	return (0);
}
