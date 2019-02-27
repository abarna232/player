#include<stdio.h>
void main()
{
int a,b,i,j,p,k,c=0;
scanf("%d %d",&a,&b);
for(i=0;i<a;i++)
{
for(j=0;j<a;j++)
{
p=2*(i+j);
k=i*j;
if(p==a && k==b)
{
c=1;
}
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
