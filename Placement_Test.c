#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int x,y,z;
        scanf("%d%d",&x,&y);
        z=(x*y)/10;
        printf("%d
",z);
    }
}