
//question name: 곱셈
//question number: 2588
//status: correct

#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	scanf("%d\n%d", &a, &b);
	printf("%d\n", a * (b % 10));
	printf("%d\n", a * ((b / 10) % 10));
	printf("%d\n", a * (b / 100));
	printf("%d", a * b);
	return (0);
}
