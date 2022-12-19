#include<stdio.h>
int main()
{
    int n,k,x,y,m;
    scanf("%d%d%d%d",&n,&k,&x,&y);
    int I=n-k;
    if(I*x<I*y)
    {
        m=k*x+I*x;
    }
    else
    {
        m=k*x+I*y;
    }
    printf("%d",m);
}