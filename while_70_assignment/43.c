#include<stdio.h>
int main()
{
  int n,i=2,j,f,m;
  printf("enter the num:");
  scanf("%d",&n);
  while(i<=n)
  {
    m=i;
    f=0;
    j=2;
    while(j<m)
    {
      if(m%j==0)
	f=1;
      break;
      j++;
    }
    if(f==0)
    {
      printf(" %d",m);
    }
    i++;
  }
}
