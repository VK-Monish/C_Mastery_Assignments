#include<stdio.h>
int main()
{
  int i=1,total=10,a=0,b=1,c;
  do
  {
    printf(" %d",a);
    c=a+b;
    a=b;
    b=c;
    i++;
  }while(i<=total);
}
