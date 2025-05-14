#include<stdio.h>
int main()
{
  int inc=1,total,y=1,sum=0,c,i,d,a;
  printf("enter the num :");
  scanf("%d",&total);
  a=5;
  for( ;inc<=total;inc++)
  {
    c=y;
    i=1;
    for( ;i<a;i++)
    {
      printf("  ");
    }
    for( ;c>0; )
    {
      d=c%10;
      printf(" %d ",d);
      c=c/10;
    }
    printf("\n");
    y=y*11;
    a--;
  }
}
