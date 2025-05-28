#include<stdio.h>
int main()
{
  int inc=1,total=5,i,a=total-1;
  for(  ;inc<=total;inc++)
  {
    i=1;
    for(  ;i<=a;  )
    {
      printf(" ");
      i++;
    }
    i=1;
    for(  ;i<=total;i++)
    {
     if (inc==2&&i==2||inc==2&&i==4||inc==2&&i==5||inc==3&&i==2||inc==3&&i==4||inc==3&&i==5||inc==4&&i==2||inc==4&&i==4||inc==4&&i==5)
     {
      printf(" ");
     }
     else
     {
       printf("*");
     }
    }
    printf("\n");
    a--;
  }
}
