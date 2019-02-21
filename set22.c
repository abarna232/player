#include<stdio.h>
void main()
{
    int a[100],i,k,n,c=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c++;
    }
    while(k)
    {
        for(i=c;i>=0;i--)
        {
            a[i]=a[i-1];
        }
        a[0]=a[c];
        k--;
    }
    for(i=0;i<c;i++)
    {
        printf("%d ",a[i]);
    }
}
