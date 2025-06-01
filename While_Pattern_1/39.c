#include<stdio.h>
int main()
{
  int x=1,y=1,z,n=9;
  while(x<n)
  {
    y=1;
    while(y<n)
    {
      if(x==4||y==4)
	printf("*");
      else
	printf(" ");
      y++;
    }
    printf("\n");
    x++;
  }
}

