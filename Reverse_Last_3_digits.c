#include<stdio.h>
int main()
{
    int i,n,rem,r=0;
    scanf("%d",&n);
    int l=n%1000;
    int k=l;
    //printf("Number = %d
",n);
    //printf("Last = %d
",l);
    int t=n;
    while(l!=0)
    {
        rem=l%10;
        l=l/10;
        r=r*10+rem;
    }
  //  printf("Rev = %d
",r);
    int sub;
    sub=t-k;
//printf("REv n = %d
",sub);
    int add;
    add=sub+r;
    printf("%d
",add);
}