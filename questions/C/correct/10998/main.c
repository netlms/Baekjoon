
//question name: A×B
//question number: 10998
//status: correct

#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	scanf("%d %d", &a, &b);
	if (a <= 0 || b <= 0 || a >= 10 || b >= 10)
		return (-1);
	printf("%d", a * b);
	return (0);
}
