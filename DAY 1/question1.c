#include <stdio.h>
int main() {

    int n,i,sum=0;

    printf("Enter a positive natural number:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        sum+=i;
    }
    printf("sum of %d natural number is: %d",n,sum);
    return 0;
}