#include<stdio.h>
int main()
{
  int inc,total=5,i;
  for(inc=1;inc<=total;inc++)
  {
    i=1;
    for(  ;i<=total;i++)
    {
      if(inc==1&&i==2||inc==1&&i==3||inc==1&&i==4||inc==2&&i==1||inc==2&&i==3||inc==2&&i==5||inc==3&&i==1||inc==3&&i==2||inc==3&&i==4||inc==3&&i==5||inc==4&&i==1||inc==4&&i==3||inc==4&&i==5||inc==5&&i==2||inc==5&&i==3||inc==5&&i==4)
      {
      printf("0");
      }
      else
      {
	printf("1");
      }
    }
    printf("\n");
  }
}
