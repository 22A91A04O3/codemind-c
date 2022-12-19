#include<stdio.h>
int main()
{
    int a,b,c,I,m,n;
    scanf("%d%d%d",&a,&b,&c);
    if(a<b&&a<c)
    {
        I=a;
    }
    else if(b<a,b<c)
    {
        I=b;
    }
    else 
    {
        I=c;
    }
    m=a+b+c-I;
    printf("%d",m);
}