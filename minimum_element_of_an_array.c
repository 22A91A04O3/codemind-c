#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int a[N];
    int min=9999;
    for(int i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
        if(min>a[i])
      {
        min=a[i];
      }
    }
    printf("%d",min);
}