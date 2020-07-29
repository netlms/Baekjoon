
//question name: 파티가 끝나고 난 뒤
//question number: 2845
//status:correct

/*
문제에서는 상근이가 계산한 참가자의 수와 각 기사에 적혀있는 참가자의 수의 차이로
설명되어 있어 상근이가 계산한 참가자의 수 - 기사에 적혀있는 참가자의수로 계산했었으나
문제 출력 예제에서는 기사에 적혀있는 참가자의 수 - 상근이가 계산한 참가자의 수로
나타나 있었고 출력 예제에 맞추어 코드를 제출하니 정답 처리가 됨. 문제 설명 혹은 번역에
문제가 있을 여지가 있는 것으로 보임
*/


#include <stdio.h>

int	main(void)
{
	int	pina;
	int	area;
	int	article[5];
	int	i;

	scanf("%d %d", &pina, &area);
	scanf("%d %d %d %d %d", &article[0], &article[1], &article[2], &article[3], &article[4]);
	if (pina < 1 || pina > 10 || area < 1 || area > 1000)
		return (-1);
	i = 0;
	while (i < 5)
	{
		if (article[i] < 0 || article[i] >= 1000000)
			return (-1);
		i++;
	}
	i = 0;
	while (i < 5)
	{
		printf("%d", article[i] - (pina * area));
		if (i != 4)
			printf(" ");
		i++;
	}
	return (0);
}
