#include<stdio.h>
int main(){
    int n,i,flag=0;

    printf("enter a number:");
    scanf("%d",&n);

    if(n<=1){
        printf("not a prime number");
    }
    else{
        for(i=2;i<=n/2;i++){
            if(n%i==0){
                flag=1;
                break;
            }
        }
        if(flag==0)
        printf("prime number");
        else
        printf("not a primse number");
    }
    return 0;
}