#include<stdio.h>
int main() {
    int num,i,largestprimefactor;

    printf("enter a number:");
    scanf("%d",&num);

    for(i=2;i<=num;i++){
        while(num%i==0){
            largestprimefactor=i;
            num=num/i;
        }
    }
    printf("largest prime factor=%d",largestprimefactor);

    return 0;
}
