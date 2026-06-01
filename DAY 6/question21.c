#include<stdio.h>
int main() {
    int num,binary[32],i=0;

    printf("enter a decimal number:");
    scanf("%d",&num);

    while(num>0){
        binary[i]=num%2;
        num=num/2;
        i++;
    }
    printf("binary equivalent=");

    for(i=i-1;i>=0;i--){
        printf("%d",binary[i]);
    }
    return 0;
}