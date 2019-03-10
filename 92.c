#include<stdio.h>
void main()
{
int b,d,i=1,r;
scanf("%d",&b);
while (b)
{
r=b%10;
b=b/10;
d=d+(i*r);
i=i*2;
}
printf("%d",d);
}
