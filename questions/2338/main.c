
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	scanf("%d\n%d", &a, &b);
	//scanf("%d", &b);
	printf("%d\n%d\n%d", a + b, a - b, a * b);
	return (0);
}
