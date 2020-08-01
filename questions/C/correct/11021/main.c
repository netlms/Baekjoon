
//question name: A+B - 7
//question number: 11021
//status: correct

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	*a;
	int	*b;
	int	i;
	int	count;

	scanf("%d", &i);
	if (i < 1)
		return (-1);
	a = (int *)malloc(sizeof(int) * i);
	b = (int *)malloc(sizeof(int) * i);
	for (count = 0; count < i; count++)
	{
		scanf("%d %d", &a[count], &b[count]);
		if (a[count] <= 0 || b[count] <= 0
				|| a[count] >= 10 || b[count] >= 10)
		{
			free(a);
			free(b);
			return (-1);
		}
	}
	for (count = 0; count < i; count++)
		printf("Case #%d: %d\n", count + 1, a[count] + b[count]);
	free(a);
	free(b);
	return (0);
}
