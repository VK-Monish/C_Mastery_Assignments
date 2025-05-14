#include<stdio.h>
int main()
{
  int num,i,s,c=0,o;
  printf("enter the num");
  scanf("%d",&num);
  for(i=1;i<=num; )
  {
    if(num%i==0)
    {
      s=1;
      o=i;
      c=0;
      for( ;s<o; )
      {
	if(o%s==0)
	{
	  c++;
	}
	s++;
      }
      if(c==1)
      {
	printf(" %d",i);
      }
    }
    i++;
  }
}
