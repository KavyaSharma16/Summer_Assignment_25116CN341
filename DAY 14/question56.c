#include<stdio.h>
int main() {
    int arr[100],n,i,j,found=0;

    printf("enter size of array:");
    scanf("%d",&n);

    printf("enter %d elements:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("duplicate elements are: ");

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                printf("%d",arr[i]);
                found=1;
                break;
            }
        }
    }
    if(found==0){
        printf("no duplicate elements found");
    }
    return 0;
}