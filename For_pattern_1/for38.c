#include<stdio.h>
int main()
{
  int inc=1,total=5,i,f=1,a=9;
  for(  ;inc<=total;inc++) 
  {
    i=1;
    for(  ;i<=f;i++)
    {
      printf(" ");
    }
    i=1;
    for(   ;i<=a;i++)
    {
      if(inc==4&&i==3||inc==3&&i==2||inc==3&&i==4||inc==3&&i==5||inc==2&&i==2||inc==2&&i==3||inc==2&&i==5||inc==2&&i==6||inc==2&&i==7)
      {
	printf(" ");
      }
      else
      {
      printf("*");
      }
    } 
    printf("\n");
    a=a-2;
    f++;
  }
}
