#include<stdio.h>
void main()
{
int a,i,j,c=0;
scanf("%d",&a);
for(i=0;i<=a;i++)
{
for(j=a;j>=0;j--)
{
if((i*1)+(j*2)==a)
{
c++;
}
}
}
printf("%d",c);
}
