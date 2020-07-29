
//question name: 나머지
//question number: 10430
//status: correct

#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	c;

	scanf("%d %d %d", &a, &b, &c);
	if (a < 1 || b < 1 || c < 1
			|| a > 10000 || b > 10000 || c > 10000)
		return (-1);
	printf("%d\n", (a + b) % c);
	printf("%d\n", ((a % c) + (b % c)) % c);
	printf("%d\n", (a * b) % c);
	printf("%d", ((a % c) * (b % c)) % c);
	return (0);
}
