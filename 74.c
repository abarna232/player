#include<stdio.h>
void main()
{
int a,b,i=1;
scanf("%d %d",&a,&b);
while(b)
{
i=i*a;
b--;
}
printf("%d",i);
}
