#include<stdio.h>
void main()
{
int a,i,k=0;
scanf("%d",&a);
for(i=2;i<a;i++)
{
if(a%i==0)
{
k=1;
}
}
if(k==0)
{
printf("no");
}
else 
{
printf("yes");
}
}
