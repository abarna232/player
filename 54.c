#include<stdio.h>
#include<string.h>
void main()
{
char a[100],b[100];
int i,c=0,d=0,k=0,m;
gets(a);
gets(b);
for(i=0;a[i]!='\0';i++)
{
c++;
}
for(i=0;b[i]!='\0';i++)
{
d++;
}
if(c==d)
{
for(i=0;i<c;i++)
{
if(a[i]==b[i])
{
k++;
}
}
if(d==k)
{
printf("yes");
}
else if(d!=k)
{
printf("no");
}
}
else if(c!=d)
{
printf("no");
}
}
