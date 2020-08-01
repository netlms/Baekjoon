
//question name: A+B - 5
//question number: 10952
//status: correct

/*
 * a, b의 범위가 1<a,b<10이라는 예외처리를 안했음에도 불구하고 사이트에서 맞다고 처리됨.
 * 또한 본인의 생각으로는 a와 b를 한번 입력할때마다 출력이 되어야 하는데 여러 개의 케이스를
 * 입력하고 0 0 을 입력하면 그동안 입력되었던 a, b의 합들을 출력 예제처럶 출력함. 아직 원리를
 * 잘 이해하지 못하므로 추후 공부 필요
*/

#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	while (scanf("%d %d", &a ,&b) == 2 && !(a == 0 && b == 0))
	{
		printf("%d\n", a + b);
	}
	return (0);
}
