#include<stdio.h>
void main()
{
int a[100],n,k,m,i;
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
m=n-k;
for(i=0;i<m;i++)
{
printf("%d ",a[i]);
}
}
