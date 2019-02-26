#include<stdio.h>
#include<string.h>
void main()
{
char a[100],b[100];
int i,j=0,k;
gets(a);
gets(b);
scanf("%d",&k);
for(i=0;a[i]!='\0';i++)
{
if(a[i]!=b[i])
{
j++;
}
}
if(j!=k)
{
printf("no");
}
else if(j==k)
{
printf("yes");
}
}
