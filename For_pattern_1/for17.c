#include<stdio.h>
int main()
{
  int inc=1,total=5,i=1,a,s=1,r=4;
  for(  ;inc<=total;inc++)
  {
    i=1;
    a=0;
    for(  ;i<=s;i++)
    {
      printf("%d",s-a);
      a++;
    }
    i=1;
    a=1;
    for(  ;i<=r;i++)
    {
      printf("%d",i+a);
    }
    printf("\n");
    s++;
    r--;
  } 
}
