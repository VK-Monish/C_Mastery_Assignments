#include<stdio.h>
int main()
{
  int num1,num2,i=1,hcf;
  printf("enter the num1:");
  scanf("%d",&num1);
  printf("enter the num:");
  scanf("%d",&num2);
  while(i<=num1&&i<=num2)
  {
    if(num1%i==0&&num2%i==0)
    {
      hcf=i;
    }
    i++;
  }
  printf("hcf  %d",hcf);
}
