#include<stdio.h>
void main()
{
char a[100],b[100]={'A','n','s','w','e','r'};
int i;
scanf("%[^\n]",a);
for(i=0;a[i]!='\0';i++)
{
printf("%c",a[i]);
}
printf(" ");
printf("%s",b);
}
