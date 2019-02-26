#include<stdio.h>
void main()
{
char a[100];
int i,c=0,d=0;
scanf("%[^\n]",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='(')
{
c++;
}
else if(a[i]==')')
{
d++;
}
}
if(c==d)
{
printf("yes");
}
else 
{
printf("no");
}
}
