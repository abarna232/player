#include<stdio.h>
void main()
{
int a[100],n,i,k;
scanf("%d",&n);
k=n;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]<k)
{
printf("%d ",a[i]);
}
}
}
