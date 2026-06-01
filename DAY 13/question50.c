#include<stdio.h>
int main() {
    int arr[100],i,n,sum=0;
    float avg;

    printf("enter zize of array:");
    scanf("%d",&n);

    printf("enter %d elements:\n",n);

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    avg=(float)sum/n;
    printf("sum=%d\n",sum);
    printf("average=%.2f\n",avg);

    return 0;
}