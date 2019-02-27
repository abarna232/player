#include<stdio.h>
void main()
{
char a[100],b[100];
int i,c=0,d=0,k=0;
gets(a);
gets(b);
for(i=0;a[i]!='\0';i++)
{
if(a[i]>=65&&a[i]<=90)
{
a[i]=a[i]+32;
}
c++;
}
for(i=0;b[i]!='\0';i++)
{
if(b[i]>=65&&b[i]<=90)
{
b[i]=b[i]+32;
}
d++;
}
if(c==d)
{
for (i=0;i<c;i++)
{
if(a[i]==b[i])
{
k++;
}
}
if(k==d)
{
printf("yes");
}
else if(k!=d)
{
printf("no");
}
}
else if(c!=d)
{
printf("no");
}
}
