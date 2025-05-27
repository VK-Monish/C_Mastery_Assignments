#include<stdio.h>
int main()
{
  int inc=1,total,a,b=0,c=0,d=0;;
  printf("enter the how:");
  scanf("%d",&total);
  while(inc<=total)
  {
    scanf("%d",&a);
    if(a<=5)
    {
      b++;
    }
    if(a>=6&&a<=17)
    {
      c++;
    }
    if(a>=18&&a<=28)
    {
      d++;
    }
    inc++;
  }
  printf("total baby age %d\n",b);
  printf("total school age %d\n",c);
  printf("total adult age %d\n",d);
}
      
