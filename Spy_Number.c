#include<stdio.h>
int main()
{
    int n,s=0,i,sl=1,r;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        s=s+r;
        sl=sl*r;
    }
    if(s==sl)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}