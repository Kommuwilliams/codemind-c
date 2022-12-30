#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int i;
    for(i=0;i<t;i++)
    {
        int x,y,a;
        scanf("%d%d%d",&a,&x,&y);
        if(y>=a && y<x)
        {
            printf("YES
");
        }
        else
        {
            printf("NO
");
        }
    }
}