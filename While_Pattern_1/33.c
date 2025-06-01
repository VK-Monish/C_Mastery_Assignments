#include<stdio.h>
int main()
{
  int total=5,i=1,e=total;
  while(total>0)
  {
    i=1;
    while(i<=total)
    {
      if(total==4&&i==2||total==4&&i==4||total==3&&i==2)
      {
	printf(" ");
      }
      else
      {
      printf("*");
      }
      i++;
    }
    printf("\n");
    total--;
  }
}
