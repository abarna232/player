#include<stdio.h>
void main()
{
long int a,k,b,r,i;
scanf("%ld %ld",&a,&k);
b=a;
i=0;
while(a)
{
r=a%10;
a=a/10;
if(r==k)
{
i++;
}
}
printf("%ld",i);
}
