#include<stdio.h>
int main()
{
  int count=1,num;
  printf("enter the num;");
  scanf("%d",&num);
  while(count<=num)
  {
    if(num%count==0)
    {
      printf("%d\n",count);
    }
    count++;
  }
}
