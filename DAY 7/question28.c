#include<stdio.h>
int reverse=0;

int reversenumber(int n)
{
    if(n==0)
    return reverse;

    reverse=reverse*10+n%10;
    return reversenumber(n/10);
}
int main(){
    int num;

    printf("enter a number:");
    scanf("%d",&num);

    printf("reversed number=%d",reversenumber(num));

    return 0;
}