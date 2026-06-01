#include <stdio.h>
int main() {
    int n,temp,rem,rev=0;

    printf("enter a number:");
    scanf("%d",&n);

    temp=n;

    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(temp==rev)
    printf("pallindrome number");
    else
    printf("not a pallindrome number");

    return 0;
}
