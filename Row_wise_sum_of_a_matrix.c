#include<stdio.h>
int main()
{
    int n,m,s;
    scanf("%d%d",&m,&n);
    int arr[1000][1000],i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]); 
        }
    }
    for(i=0;i<m;i++)
    {
        s=0;
        for(j=0;j<n;j++)
        {
            s+=arr[i][j];
        }
        printf("%d ",s);
    }
}