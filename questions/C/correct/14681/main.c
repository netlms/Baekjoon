
//question name: 사분면 고르기
//question number: 14681
//status: correct

#include <stdio.h>

int	main(void)
{
	int	x;
	int	y;

	scanf("%d\n%d", &x, &y);
	if (x < -1000 || y < -1000 || x > 1000 || y > 1000
			|| x == 0 || y == 0)
		return (-1);
	if (x > 0 && y > 0)
		printf("1");
	else if (x < 0 && y > 0)
		printf("2");
	else if (x < 0 && y < 0)
		printf("3");
	else
		printf("4");
	return (0);
}
