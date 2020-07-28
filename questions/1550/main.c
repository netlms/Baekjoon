
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	c[8];
	char	*p;
	int	i;

	p = c;
	i = 0;
	gets(c);
	while (*p)
	{
		if (*p >= 'a' && *p <= 'f')
			i = i * 16 + *p - 87;
		else if (*p >= 'A' && *p <= 'Z')
			i = i * 16 + *p - 55;
		else if (*p >= '0' && *p <= '9')
			i = i * 16 + *p - 48;
		else
			return (-1);
		p++;
	}
	printf("%d", i);
	return (0);
}
