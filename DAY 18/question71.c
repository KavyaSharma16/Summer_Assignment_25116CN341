#include<stdio.h>
int main() {
    int arr[100],n,key;
    int low,mid,high,found=0,i;

    printf("enter size of array:");
    scanf("%d",&n);

    printf("enter %d sorted elements:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter elements to search:");
    scanf("%d",&key);

    low=0;
    high=n-1;

    while(low<=high){
        mid=(low+high)/2;

        if(arr[mid]==key){
            found=1;
            printf("element found at position %d",mid+1);
            break;
        }
        else if(arr[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    if(found==0){
        printf("element not found");
    }
    return 0;
}