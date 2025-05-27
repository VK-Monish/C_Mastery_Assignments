#include<stdio.h>
int main()
{
  int n,i=2,j,f,m,a;
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
      a=1;
      printf("%d",m);
      while(a<=m)
      {
	if(a%m==0)
	{
	  printf("=%d ",1);
	  printf("%d\n",a);
	}
	a++;
      }
    }
    i++;
  }
}
