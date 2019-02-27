#include<stdio.h>
#include<string.h>
void main()
{
char a[100],k;
int i;
gets(a);
scanf("%c",&k);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==k)
{
printf("%d",i+1);
break;
}
}
}
