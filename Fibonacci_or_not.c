#include<stdio.h>
int main()
    {
        int n,a=0,b=1,c=1;
        scanf("%d",&n);
        if(n==0 || n==1)
        printf("True");
        else{
            while(c<n){
                a=b;
                b=c;
                c=a+b;
            }
        }
        if(c==n)
        printf("True");
        else
        printf("False");
    }