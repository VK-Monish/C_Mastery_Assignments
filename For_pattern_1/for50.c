#include<stdio.h>
int main()
{
  int inc=1,total=5,i,a=1,z=1,m=1,r=4,j=1,h=1,k=1;
  for( ;k<=1;  )
  {
  for(  ;inc<=total;inc++)
  {
    i=1;
    for(  ;i<=a;i++)
    {
      printf(" ");
    }
    for(  ;m<=z;  )
    {
      printf("%d",z);
      m++;
    }
    i=1;
    for(  ;i<=r;  )
    {
      printf("  ");
      i++;
    }
    for( ;j<=h;j++)
    {
      if(h==5)
      {
	printf(" ");
      }
      else
      {
      printf("%d",h);
      }
    }
    printf("\n");
    a++;
    z++;
    h++;
    r--;
  }
  inc=1,total=4,i,a=4,m=4,z=4,r=1,j=4,h=4;
  for(  ;inc<=total;inc++)
  {
    i=1;
    for(  ;i<=a;i++)
    {
      printf(" ");
    }
    for( ;m>=z; )
    {
      printf("%d",z);
      m--;
    }
    i=1;
    for( ;i<=r;  )
    {
      printf("  ");
      i++;
    }
    for( ;j>=h;j--)
    {
      printf("%d",h);
    }
    printf("\n");
    a--;
    z--;
    r++;
    h--;
  }
  k++;
  }
}
