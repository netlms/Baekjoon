
//question name: 시험 성적
//question number: 9498
//status: correct

#include <stdio.h>

int	main(void)
{
	int	a;

	scanf("%d", &a);
	if (a < 0 || a > 100)
		return (-1);
	if (a >= 90)
		printf("A");
	else if (a >= 80)
		printf("B");
	else if (a >= 70)
		printf("C");
	else if (a >= 60)
		printf("D");
	else
		printf("F");
	return (0);
}
