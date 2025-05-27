#include<stdio.h>
int main()
{
  int num,y;
  printf("enter the num:");
  scanf("%d",&num);
  while(num>0)
  { 
    y=num%10;
    printf("%d",y);
    num=num/10;
  }
}
