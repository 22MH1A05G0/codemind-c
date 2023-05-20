#include<stdio.h>
int main()
{
    int n,temp,sq,r,sum=0;
    scanf("%d",&n);
    temp=n;
    sq=n*n;
    while(sq!=0){
        r=sq%10;
        sum=sum+r;
        sq=sq/10;
    }
    if(temp==sum){
        printf("Neon Number");
    }
    else{
        printf("Not Neon Number");
    }
    

}