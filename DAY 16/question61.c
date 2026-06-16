#include<stdio.h>
int main() {
    int n,i;
    int arr[100];
    int sum=0,total=0,missing;

    printf("enter size of array(including missing number range):");
    scanf("%d",&n);

    printf("enter %d elements:\n",n-1);
    for(i=0;i<n-1;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    total=n*(n+1)/2;
    missing=total-sum;
    printf("missing number=%d",missing);

    return 0;
}