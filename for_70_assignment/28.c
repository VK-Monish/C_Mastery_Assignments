#include<stdio.h>
int main()
{
  int num,a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,y;
  printf("enter the num;");
  scanf("%d",&num);
  for( ;num>0; )
  {
    y=num%10;
    if(y==1)
    {
      a++;
    }
    if(y==2)
    {
      b++;
    }
    if(y==3)
    {
      c++;
    }
    if(y==4)
    {
      d++;
    }
    if(y==5)
    {
      e++;
    }
    if(y==6)
    {
      f++;
    }
    if(y==7)
    {
      g++;
    }
    if(y==8)
    {
      h++;
    }
    if(y==9)
    {
      i++;
    }
    num=num/10;
  }
  printf("1 %d\n",a);
  printf("2 %d\n",b);
  printf("3 %d\n",c);
  printf("4 %d\n",d);
  printf("5 %d\n",e);
  printf("6 %d\n",f);
  printf("7 %d\n",g);
  printf("8 %d\n",h);
  printf("9 %d\n",i);
//  printf("0%d",a);
}
