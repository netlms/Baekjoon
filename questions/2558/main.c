
//question name: A+B - 2
//question number: 2558
//status:correct

#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	scanf("%d\n%d", &a, &b);
	if (0 >= a || a >= 10 || 0 >= b || b >= 10)
		return (-1);
	printf("%d", a + b);
	return (0);
}
