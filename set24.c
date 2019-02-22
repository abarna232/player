#include<stdio.h>
void main()
{
    char a[100],b[100];
    int n,i,k=0,j;
    scanf("%d",&n);
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        k++;
    }
    if(n==k)
    {
        for(i=k-1;a[i]!='\0';i--)
        {
            if(a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u')
            {
                printf("%c",a[i]);
            }
        }
    }
}
