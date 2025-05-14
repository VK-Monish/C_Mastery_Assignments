#include<stdio.h>
int main()
{
  int num,y,sum=0,c;
  scanf("%d",&num);
  c=num;
  for( ;num>0;  )
  {
    y=num%10;
    sum=y+sum*10;
    num=num/10;
  }
  if(sum==c)
  printf("it is palindrome");
  else
    printf("it is not palindrome");

}
