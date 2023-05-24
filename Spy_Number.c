#include<stdio.h>
int main()
{
    int i,n,sum=0,pro=1,rem;
    scanf("%d",&n);
    while(n)
    {
        rem=n%10;
        pro=pro*rem;
        sum=sum+rem;
        n=n/10;
    }
    if(pro==sum)
    printf("Spy Number");
    else
    printf("Not Spy Number");
}