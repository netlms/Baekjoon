
//question name: A+B - 5
//question number: 10952
//status: correct: correct

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	*arr_a;
	int	*arr_b;
	int	a;
	int	b;
	int	i;
	int	size;
	
	scanf("%d %d", &a, &b);
	if (a == 0 && b == 0)
		return (0);
	if (a <= 0 || b <= 0 || a >= 10 || b >= 10)
		return (-1);
	size = 1;
	arr_a = (int *)malloc(sizeof(int) * size);
	arr_b = (int *)malloc(sizeof(int) * size);
	arr_a[size - 1] = a;
	arr_b[size - 1] = b;
	while(1)
	{
		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0)
			break;
		if (a <= 0 || b <= 0 || a >= 10 || b >= 10)
		{
			
			free(arr_a);
			free(arr_b);
			return (-1);
		}
		size += 1;
		arr_a = (int *)realloc(arr_a, sizeof(int) * size);
		arr_b = (int *)realloc(arr_b, sizeof(int) * size);
		arr_a[size - 1] = a;
		arr_b[size - 1] = b;
	}
	i = 0;
	while (i < size)
	{
		printf("%d\n", arr_a[i] + arr_b[i]);
		i++;
	}
	free(arr_a);
	free(arr_b);
	return (0);
}
