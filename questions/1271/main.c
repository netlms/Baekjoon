
//question name: 엄청난 부자2
//question number: 1271
//status: incorrect

#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	scanf("%d %d", &a, &b);
	if (a < 0 || a > 10000 || b < 0 || b > 10000)
		return (-1);
	printf("%d\n%d", a / b, a % b);
	return (0);
}
