
//question name: A+B - 3
//question number: 10950
//status: correct

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	num;
	int	*a;
	int	*b;
	int	i;

	scanf("%d", &num);
	a = (int *)malloc(sizeof(int) * num);
	b = (int *)malloc(sizeof(int) * num);
	for (i = 0; i < num; i++)
	{
		scanf("%d %d", &a[i], &b[i]);
		if (a[i] <= 0 || b[i] <= 0
				|| a[i] >= 10 || b[i] >= 10)
		{
			free(a);
			free(b);
			return (-1);
		}
	}
	for (i = 0; i < num; i++)
		printf("%d\n", a[i] + b[i]);
	free(a);
	free(b);
	return (0);
}
