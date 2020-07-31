
//question name: N 찍기
//question number: 2741
//status: correct

#include <stdio.h>

int	main(void)
{
	int	a;
	int	i;

	scanf("%d", &a);
	if (a < 1 || a > 100000)
		return (-1);
	for (i = 1; i <= a; i++)
		printf("%d\n", i);
	return (0);
}
