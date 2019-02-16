#include<stdio.h>
void main()
{
    char a[100];
    int i;
    scanf("%[^\n]",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            a[i+1]=a[i+1]-32;
        }
        if(i==0)
        {
            a[i]=a[i]-32;
        }
    }
    for(i=0;a[i]!='\0';i++)
    {
        printf("%c",a[i]);
    }
}
