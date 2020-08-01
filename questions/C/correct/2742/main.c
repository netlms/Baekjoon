
//question name: 기찍 N
//question number: 2742
//status: correct

#include <stdio.h>

int	main(void)
{
	int	n;

	scanf("%d", &n);
	if (n < 1 || n > 100000)
		return (-1);
	for (;n > 0; n--)
		printf("%d\n", n);
	return (0);
}
