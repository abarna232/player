#include<stdio.h>
void main()
{
int a[100],n,c=0,i,j;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
c=1;
}
}
}
if(c!=1)
{
printf("yes");
}
else 
{
printf("no");
}
}
