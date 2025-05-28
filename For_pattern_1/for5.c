#include<stdio.h>
int main()
{
  int inc,total=5,i;
  for(inc=1;inc<=total;inc++)
  {
    i=1;
    for(  ;i<=total;i++)
    {
      if(inc==1&&i==1||inc==1&&i==3||inc==1&&i==5||inc==2&&i==2||inc==2&&i==4||inc==3&&i==1||inc==3&&i==3||inc==3&&i==5||inc==4&&i==2||inc==4&&i==4||inc==5&&i==1||inc==5&&i==3||inc==5&&i==5)
      {
      printf("1");
      }
      else
      {
	printf("0");
      }
    }
    printf("\n");
  }
}

