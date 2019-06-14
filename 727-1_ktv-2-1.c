int main(void)
{
  int n,razn=0,x;
  scanf("%d",&n);
  while (n>=1)
  {
        scanf("%d",&x);
        if (x <= 0)
        {
                razn++;
        }
        n--;
  }
  printf ("%d\n",razn);
  return 0;
}
