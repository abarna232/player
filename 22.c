#include<stdio.h>
void main()
{
int a[100],b,c,j=0,i=1,k=0;
scanf("%d %d",&b,&c);
while(i<=b&&i<=c)
{
if(b%i==0&&c%i==0)
{
a[j]=i;
j++;
}
i++;
}
for(i=0;i<j;i++)
{
if(a[i]>k)
{
k=a[i];
}
}
printf("%d",k);
}
