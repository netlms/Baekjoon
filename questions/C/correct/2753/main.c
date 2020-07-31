
//question name: 윤년
//question number: 2753
//status: correct

#include <stdio.h>

int	main(void)
{
	int	year;

	scanf("%d", &year);
	if (year < 1 || year > 4000)
		return (-1);
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		printf("1");
	else
		printf("0");
	return (0);
}
