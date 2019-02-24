#include<stdio.h>
void main()
{
int a1,b1,a2,b2,a3,b3;
scanf("%d %d",&a1,&b1);
scanf("%d %d",&a2,&b2);
scanf("%d %d",&a3,&b3);
if((a1==a2&&a2==a3&&a3==a1) ||(b1==b2&&b2==b3&&b3==b1))
{
printf("yes");
}
else 
{
printf("no");
}
}
