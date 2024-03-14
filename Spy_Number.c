#include<stdio.h>
int main()
{
    int n,sum=0,product=1;
    scanf("%d",&n);
    while(n){
        int i=n%10;
        sum+=i;
        product*=i;
        n=n/10;
    }
    if(sum==product){
        printf("Spy Number");
    }
    else{
        printf("Not Spy Number");
    }
}