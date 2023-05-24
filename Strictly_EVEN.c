#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,a[n],x;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            if(a[i]%2==0)
            {
                x=0;
            }
            else
            {
                x=1;
                break;
            }
        }
    }
    if(x==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}