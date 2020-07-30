
//question name: 합
//question number: 8393
//status: correct

/*
 * n이 홀수일 경우 (n^2)/2, 짝수일 경우 (n^2)/2 + n/2의 공식을
 * 이용하여 반복문 없이 구현 가능
*/

#include <stdio.h>

int	main(void)
{
	int	n;
	int	sum;

	scanf("%d", &n);
	if (n < 1 || n > 10000)
		return (-1);
	sum = 0;
	for (int i = 0; i <= n; i++)
		sum += i;
	printf("%d", sum);
	return (0);
}
