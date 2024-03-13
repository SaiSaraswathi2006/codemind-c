#include<stdio.h>
int main()
{
    int n,i=1;
    scanf("%d",&n);
    int m=1;
    while(i<=n){
        m*=i;
        i++;
    }
    printf("%d",m);
}