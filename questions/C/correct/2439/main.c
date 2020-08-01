
//question name: 별 찍기 - 2
//question number: 2439
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
	for (c = 1; c <= i; c++)
	{
		for (star = i; star > c; star--)
			printf(" ");
		for (star = 0; star < c; star++)
			printf("*");
		printf("\n");
	}
	return (0);
}
