#include<stdio.h>
void main()
{
    char a[100];
    int i;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[0]!='s')
        {
            printf("no");
            break;
        }
        else
        {
            printf("yes");
            break;
        }
    }
}
