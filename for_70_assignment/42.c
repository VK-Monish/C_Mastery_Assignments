#include<stdio.h>
int main()
{
  int num1,num2,i,hcf,c=1,j,lcm;
  printf("enter the num1");
  scanf("%d",&num1);
  printf("enter the num2");
  scanf("%d",&num2);
  for(i=1;i<=num1&&i<=num2; )
  {
    if(num1%i==0&&num2%i==0)
    {
      hcf=c;
    }
    c++;
    i++;
  }
  j=num1*num2;
  lcm=j/hcf;
  printf("%d",lcm);
}
