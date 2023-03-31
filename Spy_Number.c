#include<stdio.h>
int main()
{
    int i,n,r,sum=0,p=1;
    scanf("%d",&n);
   while(n!=0)
    {
        r=n%10;
        n=n/10;
        sum=sum+r;
        p=p*r;
    }
    if(sum==p){
    printf("Spy Number");
    }
    else{
    printf("Not Spy Number");
}}