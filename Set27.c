#include<stdio.h>
void main()
{
int a,i,k;
scanf("%d %d",&a,&k);
i=a+1;
while(i)
{
if(i%a==0&&i%k==0)
{
printf("%d",i);
break;
}
i++;
}
}
