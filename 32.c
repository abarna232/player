#include<stdio.h>
void main()
{
int n,i,a[100],k,c=0;
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]==k)
{
printf("yes");
}
else 
{
c++;
}
}
if(c==n)
{
printf("no");
}
}
