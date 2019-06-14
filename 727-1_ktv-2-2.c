#include <stdio.h>
#include <math.h>
int main(void)
{
  int n,summ=0,x;
  scanf("%d",&n);
  for (int i=1;i<=n;i++)
  {
    scanf("%d",&x);
        summ = summ + pow(-1, i + 1)*pow(x, 3);
  }
  printf ("%d\n",summ);
  return 0;
}
