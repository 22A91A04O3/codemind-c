#include<stdio.h>
int main()
{
    int n,i,arr[100],s=0,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>=sum/n)
        s++;
    }
    printf("%d",s);
}