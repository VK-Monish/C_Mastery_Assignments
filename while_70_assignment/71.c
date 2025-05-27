#include<stdio.h>
int main()
{
  int num,y,sum=0,d,k=1,z=1;
  printf("enter the num");
  scanf("%d",&num);
  while(k<=1)
  {
    while(num>0)
    {
      y=num%10;
      sum=y+sum*10;
      num=num/10;
    }
    printf("%d ",sum);
    while(sum>0)
    {
      d=sum%10;
      if(d==0)
      {
	printf("1");
      }
      if(d==1)
      {
	printf("0");
      }
      sum=sum/10;
    }
    k++;
  }
}
