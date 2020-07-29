
#include <stdio.h>


int	get_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	get_atoi(char c)
{
	return (c - '0');
}

void	put_add(char *a, char *b, int a_len, int b_len, int carry)
{
	int	num;

	if (a_len == 0 && b_len == 0)
		
		return ;
	else
	{
		num = get_atoi(a[a_len]) + get_atoi(b[b_len]);
		if (carry != 0)
			num += carry;
		if (num >= 10)
		{
			carry = num / 10;
			num %= 10;
		}



}

int	main(void)
{
	char	a[1001];
	char	b[1001];
	char	c[1002];

	gets(a);
	gets(b);
	put_add(a, b, get_strlen(a), get_strlen(b), 0);
	return (0);
}
