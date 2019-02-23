#include<stdio.h>
void main()
{
char a[100];
int i;
scanf("%[^\n]",&a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='x')
{
printf("a");
}
else if(a[i]=='X')
{
printf("A");
}
else if(a[i]=='y')
{
printf("b");
}
else if(a[i]=='Y')
{
printf("B");
}
else if(a[i]=='z')
{
printf("c");
}
else if(a[i]=='Z')
{
printf("C");
}
else 
{
a[i]=a[i]+3;
printf("%c",a[i]);
}
}
}
