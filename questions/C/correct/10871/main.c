
//question name: X보다 작은 수
//quesiton number: 10871
//status: correct

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int n;
  int x;
  int *a;
  int i;

  scanf("%d %d", &n, &x);
  if (n < 1 || x < 1 || n > 10000 || x > 10000)
    return (-1);
  a = (int *)malloc(sizeof(int) * n);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  for (i = 0; i < n; i++)
  {
    if (a[i] < 1 ||  a[i] > 10000)
    { 
      free(a);
      return (-1);
    }
  }
  for (i = 0; i < n; i++)
  {
    if (a[i] < x)
      printf("%d ", a[i]);
  }
  free(a);
  return (0);
}
