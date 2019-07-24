#include <stdio.h>
int main(void)
{
  int c=0,n=0,sum=0;
  printf("enter number\n");
  scanf("%d",&n);
  for (size_t j = 0; j <= n; j++) {
c=0;
  for (size_t i = 1; i <=j ; i++) {
    if(j%i==0)
    {
      c++;
    }
  }
  if(c==2)
  {
    sum=sum +(j*j*j);
  }
  }
  printf("%d\n", sum);
}
