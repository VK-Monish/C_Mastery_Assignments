#include<stdio.h>
int main()
{
  int n,z=2,y=1;
  scanf("%d",&n);
  do
  {
    if(n%z==0)
    {
      y++;
    }
    z++;
  }while(z<n);
  if(y==1)
  {
    printf("prime number");
  }
  else
  {
    printf("not prime number");
  }
}
