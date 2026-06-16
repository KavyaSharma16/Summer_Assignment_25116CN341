#include<stdio.h>
int main() {
    int arr[100],n,i,j,sum,found=0;

    printf("enter size of array:");
    scanf("%d",&n);

    printf("enter %d elements:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter required sum:");
    scanf("%d",&sum);

    printf("pair with sum %d are:\n",sum);

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]+arr[j]==sum){
                printf("(%d,%d)\n",arr[i],arr[j]);
                found=1;
            }
        }
    }
    if(found==0){
        printf("no pair found");
    }
    return 0;
}