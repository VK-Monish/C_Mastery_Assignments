#include<stdio.h>
int main()
{
  int num,y,l;
  printf("enter the num");
  scanf("%d",&num);
  y=num%10;
  printf("last digi%d\n",y);
  for( ;num>10; )
  {
    num=num/10;
  }
  printf("first digit %d",num);
}
