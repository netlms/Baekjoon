
//question name: 더하기 사이클
//question number: 1110
//status: correct

#include <stdio.h>

int	main(void)
{
	int	n;
	int	count;
	int	temp_n;
	int	f;
	int	s;

	scanf("%d", &n);
	if (n < 0 || n > 99)
		return (-1);
	count = 1;
	f = n % 10;
	s = n / 10;
	temp_n = (n % 10) * 10 + ((f + s) % 10);
	if (temp_n == n)
	{
		printf("%d", count);
		return (0);
	}
	while (temp_n != n)
	{
		f = temp_n % 10;
		s = temp_n / 10;
		temp_n = (temp_n % 10) * 10 + ((f + s) % 10);
		count++;
	}
	printf("%d", count);
	return (0);
}
