#include<stdio.h>
void main()
{
    char a[100],b[100];
    int i,j,l=0;
    scanf("%[^\n]",a);
    for(i=0;a[i]!='\0';i++)
    {
        l++;
    }
    j=l;
    for(i=0;a[i]!='\0';i++)
    {
        b[j]=a[i];
        j--;
    }
    for(i=1;b[i]!='\0';i++)
    {
        printf("%c",b[i]);
    }
}
