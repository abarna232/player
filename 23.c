#include<stdio.h>
void main()
{
    int a[100],b[100],n,k,i,j,m;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<k;i++)
    
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<k;i++)
    {
        m=a[0];
        a[n]=b[i];
        for(j=0;j<=n;j++)
        {
            if(a[j]>m)
            {
                m=a[j];
            }
        }
        printf("%d ",m);
        n++;
    }
}
