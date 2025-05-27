#include<stdio.h>
int main()
{
  int num;
  printf("enter the num:");
  scanf("%d",&num);
  if(num==0)
  {
    printf("the given  number is zero");
  }
  else if(num>=1)
  {
    printf("the given number is postive");
  }
  else if(num<=0)
  {
    printf("the given number is negative");
  }
}
