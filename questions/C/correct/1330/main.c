
//question name: 두 수 비교하기
//question number: 1330
//status: correct

#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	scanf("%d %d", &a, &b);
	if (a < -10000 || b < -10000
			|| a > 10000 || b > 10000)
		return (-1);
	if (a > b)
		printf(">");
	else if (a < b)
		printf("<");
	else
		printf("==");
	return (0);
}
