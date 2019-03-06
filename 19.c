#include<stdio.h>
void main()
{
int a,b[100],i,j=0,k;
scanf("%d",&a);
for(i=2;i<=a;i++)
{
if(a%i==0)
{
b[j]=i;
j++;
}
}
for(i=0;i<j;i++)
{
for(k=2;k<b[i];k++)
{
if(b[i]%k==0)
{
b[i]='$';
}
}
}
for(i=0;i<j;i++)
{
if(b[i]!='$')
{
printf("%d ",b[i]);
}
}
}
