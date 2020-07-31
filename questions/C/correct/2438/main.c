
//question name: 별 찍기 - 1
//question number: 2438
//status: correct

#include <stdio.h>

int	main(void)
{
	int	i;
	int	c;
	int	star;

	scanf("%d", &i);
	if (i < 1 || i > 100)
		return (-1);
	for (c = 0;c < i; c++)
	{
		for (star = 0; star < c + 1; star++)
			printf("*");
		printf("\n");
	}
	return (0);
}
