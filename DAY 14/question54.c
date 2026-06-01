#include<stdio.h>
int main() {
    int arr[100],i,n,key,count=0;
    printf("enter size of array:");
    scanf("%d",&n);

    printf("enter %d elements:\n",n);

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter element to find frequency:");
    scanf("%d",&key);

    for(i=0;i<n;i++){
        if(arr[i]==key){
            count++;
        }
    }
    printf("frequency of %d=%d",key,count);

    return 0;
}