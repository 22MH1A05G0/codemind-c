#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int i,n,esum=0,osum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            esum=esum+a[i];
        }
        else if(i%2!=0)
        {
            osum=osum+a[i];
        }
    }
    int diff=(osum-esum);
    printf("%d",abs(diff));
}