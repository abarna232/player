#include<stdio.h>
void main()
{
int a,b,i,j,m,c=0;
scanf("%d %d",&a,&b);
for(i=a+1;i<b;i++)
{
m=i;
for(j=2;j<i;j++)
{
if(j*j==m)
{
c++;
}
}
}
printf("%d",c);
}
