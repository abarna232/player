#include<stdio.h>
void main()
{
int a[100],n,i,m;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(i<n-1)
{
if(a[i]>=a[i+1])
{
m=a[i];
}
else if(a[i]<a[i+1])
{
m=a[i+1];
}
printf("%d ",m);
}
}
}
