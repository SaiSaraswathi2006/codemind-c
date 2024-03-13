#include<stdio.h>
int main()
{
    int l,u;
    scanf("%d%d",&l,&u);
    for(int i=l;i<=u;++i){
        int num=i;
        int sd=1;
        while(num>0){
            int digit=num%10;
            if(digit==0||i%digit!=0){
                sd=0;
                break;
            }
            num/=10;
        }
        if(sd){
            printf("%d ",i);
        }
    }
    
}