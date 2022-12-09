#include<stdio.h>
int main()
{
    int C,S,T,B,kb;
    scanf("%d%d%d",&S,&B,&T);
    C=(2*S*T*B*512)/1024;
    printf("%dkb",C);
}