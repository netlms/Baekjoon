
//question name: 알람 시계
//question number: 2884
//status: correct

#include <stdio.h>

int	main(void)
{
	int	h;
	int	m;

	scanf("%d %d", &h, &m);
	if (h < 0 || h > 23 || m < 0 || m > 59)
		return (-1);
	if (m >= 45)
		printf("%d %d", h, m - 45);
	else if (m < 45)
	{
		if (h == 0)
			h = 24;
		printf("%d %d", h - 1, 60 + (m - 45));
	}
	return (0);
}
