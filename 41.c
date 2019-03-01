#include<stdio.h>
void main()
{
int a,k,i,r=1,c=0;
scanf("%d %d",&a,&k);
for (i=1;i<=a;i++)
{
r=r*k;
if(r==a)
{
c=1;
}
}
if(c==1)
{
printf("yes");
}
else 
{
printf("no");
}
}
