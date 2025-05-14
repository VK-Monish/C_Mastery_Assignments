#include<stdio.h>
int main()
{
  int inc,total,q;
  printf("enter the num:");
  scanf("%d",&num);
  for(;q=!0;)
  {  
    scanf("%d",&q);
    if(q>0)
    {
      printf("the given num is negative");
    }
    else if(q==0)
    {
      printf("the given nun is zero");
    }
    else if(q<0)
    {
      printf("the given num is postive");
    }
  }
}
