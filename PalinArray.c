#include<stdio.h>
int main(){
    int n,temp,i,cnt=0;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
        temp=x[i];
    }
    for(i=0;i<n;i++){
        int rem,r=0;
        temp=x[i];
        while(x[i]!=0){
            rem=x[i]%10;
            r=r*10+rem;
            x[i]=x[i]/10;
        }
        if(r==temp)
        cnt++;
    }
    if(cnt==n)
    printf("1");
    else 
    printf("0");
}