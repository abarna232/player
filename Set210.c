#include<stdio.h>
void main()
{
char a[100];
int i;
scanf("%[^\n]",&a);
for(i=0;a[i]!='\0';i++)
{
a[i]=a[i]+3;
printf("%c",a[i]);
}
}
