#include<stdio.h>
void main()
{
    char a[100];
    int i,t;
    scanf("%[^\n]",a);
    for ( i=0;a[i]!='\0';i++)
    {
        if(i%2==0)
        {
            t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;
        }
    }
    for(i=0;a[i]!='\0';i++)
    {
        printf("%c",a[i]);
    }
}
