#include<stdio.h>
int main()
{
    int n,sum=0,ar[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++){
        sum+=ar[i];
    }
    printf("%d",sum);
}