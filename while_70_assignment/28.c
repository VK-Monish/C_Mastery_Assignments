#include<stdio.h>
int main()
{
  int y,total,a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,r=0;
  printf("enter the num:");
  scanf("%d",&total);
  while(total>0)
  {
    y=total%10;
    if(y==1)
    {
      a++;
    }
    else if(y==2)
    {
      b++;
    }
    else if(y==3)
    {
      c++;
    }
    else if(y==4)
    {
      d++;
    }
    else if(y==5)
    {
      e++;
    }
    else if(y==6)
    {
      f++;
    }
    else if(y==7)
    {
      g++;
    }
    else if(y==8)
    {
      h++;
    }
    else if(y==9)
    {
      i++;
    }
    else if(y==0)
    {
      r++;
    }
    total=total/10;
  }
  printf("1=%d\n",a);
  printf("2=%d\n",b);
  printf("3=%d\n",c);
  printf("4=%d\n",d);
  printf("5=%d\n",e);
  printf("6=%d\n",f);
  printf("7=%d\n",g);
  printf("8=%d\n",h);
  printf("9=%d\n",i);
  printf("0=%d\n",r);
}
