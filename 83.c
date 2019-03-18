#include<stdio.h>
void main()
{
int a[1000],n,i,l=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
l=l|a[i];
}
printf("%d",l);
}
