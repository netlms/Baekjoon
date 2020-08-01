
//question name: A+B - 4
//question number: 10951
//status: correct

/*
 * a, b의 범위가 1<a,b<10이라는 예외처리를 안했음에도 불구하고 사이트에서 맞다고 처리됨.
 * 또한 본인의 생각으로는 a와 b를 한번 입력할때마다 출력이 되어야 하는데 여러 개의 케이스를
 * 입력하고 0 0 을 입력하면 그동안 입력되었던 a, b의 합들을 출력 예제처럶 출력함. 아직 원리를
 * 잘 이해하지 못하므로 추후 공부 필요
*/

/*
 *bash 내에서가 아닌, exe파일을 직접 실행하여 테스트 해본 결과, 각 케이스를 입력하고 개행을 입력할
 *때마다 결과값을 그때그때 바로 출력함. 또한 ctrl + Z (EOF)를 입력하니 바로 종료되어 프로그램이
 *본인의 생각과 같이 올바르게 종료됨을 확인함. 프로그램이 어떻게 실행되느냐도 실행 결과에 차이가 생김.
 *그러나 여전히 a와 b의 값에 대한 예외처리를 안했음에도 사이트 채점 결과가 맞다고 나오는 이유는 의문
*/

//scanf 함수는 int형을 반환하며 반환값은 입력받은 인수의 개수

#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	while (scanf("%d %d", &a ,&b) != EOF)
	{
		printf("%d\n", a + b);
	}
	return (0);
}
