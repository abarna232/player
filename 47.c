#include<stdio.h>
void main()
{
int x,y,z;
scanf("%d %d %d",&x,&y,&z);
if(x>0&&y>0&&z>0&&x+y+z==180)
{
printf("yes");
}
else 
{
printf("no");
}
}
