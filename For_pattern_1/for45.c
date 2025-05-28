#include<stdio.h>
int main()
{
  int i=1,j=1,n=6;
  for(  ;i<=n;i++)
  {
    for(j=1;j<n;  )
    {
      if(i==j||n==i+j)
      {
	printf("*");
      }
      else
      {
	printf(" ");
      }
      j++;
    }
    printf("\n");
  }
}
