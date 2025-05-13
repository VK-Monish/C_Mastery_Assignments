#include<stdio.h>
int main()
{
  int x=1,k=1,s=5,y;
  do
  {
    if(x>=1&&x<=4)
    {
      y=1;
      do
      {
	printf(" ");
	y++;
      }while(y<s);
    }
      y=1;
      do
      {
	printf("*");
	y++;
      }while(y<=k);
      printf("\n");
      x++;
      s--;
      k++;
  }while(x<=5);
}

