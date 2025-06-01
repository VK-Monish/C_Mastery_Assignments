#include<stdio.h>
int main()
{
  int t=5,z,i,a,x=9;
  a=t;
  while(t>0)
  {
    i=1;
    z=a-t;
    while(i<=z)
    {
      printf(" ");
      i++;
    }
    i=1;
    while(i<=x)
    {
      if(t==4&&i==2||t==4&&i==3||t==4&&i==4||t==4&&i==6||t==4&&i==7||t==3&&i==2||t==3&&i==3||t==3&&i==5||t==2&&i==2)
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
    t--;
    x=x-2;
  }
}
