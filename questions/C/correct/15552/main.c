
//question name: 빠른 A+B
//question number: 15552
//status: correct 

/*
본 문제는 여러 다른 언어들에서 사용하는 입출력 방식의 속도가 느려 런타임 에러를 발생할 수 있는
문제점을 꼬집어낸 문제이다. 이 파일에서는 사용한 printf, scanf는 충분히 빠르게 작동하지만 
c++에서 사용하는 cin, cout, 자바에서 사용하는 Scanner, system.out.println 등은 런타임 에러를
발생시킬 수 있다. 추후 다른 언어를 사용하여 본 문제를 풀땐 이러한 점을 유의해야 한다.
*/

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	num;
	int	*a;
	int	*b;
	int	i;

	scanf("%d", &num);
	if (num < 0 || num > 1000000)
		return (-1);
	a = (int *)malloc(sizeof(int) * num);
	b = (int *)malloc(sizeof(int) * num);
	for (i = 0; i < num; i++)
	{
		scanf("%d %d", &a[i], &b[i]);
		if (a[i] < 1 || b[i] < 1 || a[i] > 1000 || b[i] > 1000)
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
