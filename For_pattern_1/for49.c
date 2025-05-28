#include<stdio.h>
int main()
{
  int inc=1,total=10,i;
  for( ;inc<=total;inc++)
  {
    i=1;
    for(  ;i<=3;i++)
    {
      if(inc==1&&i==2||inc==5&&i==2||inc==10&&i==2)
      {
	printf("*");
      }
      else if(i==2)
      {
	printf(" ");
      }
      else
      {
      printf("*");
      }
    }
    printf("\n");
  }
}
