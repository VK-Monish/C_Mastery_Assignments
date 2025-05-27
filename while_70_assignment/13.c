#include<stdio.h>
int main()
{
  int tem,no,swap,rev=0,f,l;
  printf("enter the num:");
  scanf("%d",&no);
  tem=no;
  l=no%10;
  swap=l;
  while(no>10)
    no=no/10;
  f=no;
  no=tem/10;
    while(no>10)
    {
      rev=rev*10+no%10;
      no=no/10;
    }
    while(rev>0)
    {
      swap=swap*10+rev%10;
      rev=rev/10;
    }
    swap=swap*10+f;
    printf("%d",swap);
}
