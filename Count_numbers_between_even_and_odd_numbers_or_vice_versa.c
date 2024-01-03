#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int c=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<n-1;i++){
        int a=arr[i-1];
        int b=arr[i+1];
        if(a%2==0&&b%2!=0)c++;
        else if (b%2==0&&a%2!=0)c++;
    }
    printf("%d",c);
}