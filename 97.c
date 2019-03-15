#include<stdio.h>
void main()
{
int l,r,s=0,i;
scanf("%d %d",&l,&r);
for(i=l;i<=r;i++)
{
if(i%2!=0)
{
s=s+i;
}
}
printf("%d",s);
}
