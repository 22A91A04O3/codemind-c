#include<stdio.h>
int main()
{
    int a,b,i,n,c,sum=0;
    scanf("%d",&n);
    int arr[100];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(arr[i]<a||arr[i]>b)
        {
            sum+=arr[i];
        }
    }
    printf("%d",sum);
}