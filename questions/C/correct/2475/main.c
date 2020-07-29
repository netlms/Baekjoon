
//question name: 검증수
//question number: 2475
//status: correct

#include <stdio.h>

int	sqrot(int a)
{
	return (a * a);
}

int	main(void)
{
	int	a[5];
	int	mod;
	int	i;

	scanf("%d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4]);
	mod = 0;
	i = 0;
	while (i < 5)
	{
		mod += sqrot(a[i]);
		i++;
	}
	printf("%d", mod % 10);
	return (0);
}
