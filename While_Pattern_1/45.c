#include<stdio.h>
int main()
{
  int i=1,j=1,n=9,z;
  while(i<=n)
  {
    j=1;
    while(j<=n)
    {
      z=n+1;
      if(i==j || i+j==z)
      {
	printf("%d",j);
      }
      else
      {
	printf(" ");
      }
      j++;
    }
    printf("\n");
    i++;
  }
}

