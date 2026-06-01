#include<stdio.h>
int ispalindrome(int n){
    int original=0,reverse=0,rem;
    while(n!=0){
        rem=n%10;
        reverse=reverse*10+rem;
        n=n/10;
    }
    return(original==reverse);
}
int main() {
    int num;
    printf("enter a number:");
    scanf("%d",&num);

    if(ispalindrome(num))
    printf("%d is a palindrome number",num);
    else
    printf("%d is not a plaindrome number",num);

    return 0;
}