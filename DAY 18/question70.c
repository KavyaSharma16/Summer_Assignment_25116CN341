#include<stdio.h>
int main() {
    int arr[100],i,j,n,minindex,temp;

    printf("enter size of array:");
    scanf("%d",&n);

    printf("enter %d elements:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        minindex=i;

        for(j=i+1;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[minindex];
        arr[minindex]=temp;
    }
    printf("sorted array:\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}