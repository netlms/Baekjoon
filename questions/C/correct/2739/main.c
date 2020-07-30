
//question name: 구구단
//question number: 2739
//status: correct

#include <stdio.h>

int	main(void)
{
	int	n;

	scanf("%d", &n);
	if (n < 1 || n > 9)
		return (-1);
	for (int i = 1; i <= 9; i++)
		printf("%d * %d = %d\n", n, i, n * i);
	return (0);
}
