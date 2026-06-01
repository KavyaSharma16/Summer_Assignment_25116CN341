#include<stdio.h>
int isarmstrong(int n){
    int original=n,sum=0,rem;

    while(n!=0){
        rem=n%10;
        sum=sum+(rem*rem*rem);
        n=n/10;
    }
    return(original==sum);
}
int main() {
    int num;
    
    printf("enter a number:");
    scanf("%d",&num);

    if(isarmstrong(num))
    printf("%d is an armstrong number",num);
    else
    printf("%d is not an armstrong number",num);

    return 0;
}