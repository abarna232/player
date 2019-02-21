#include<stdio.h>
void main()
{
    int a,b,i,j,k=0,l=0,p;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
        l++;
    }
    for(i=a;i<=b;i++)
    {
      for(j=2;j<i;j++)
      {
          if(i%j==0)
          {
              k++;
              break;
          }
      }
    }
    p=l-k;
    printf("%d",p);
}
