#include<stdio.h>
void main()
{
int a[100],n,c,i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
c=a[0];
for(i=1;i<n;i++)
{
c=c^a[i];
}
printf("%d",c);
}
