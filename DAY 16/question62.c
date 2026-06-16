#include<stdio.h>
int main() {
    int arr[100],n,i,j;
    int maxfreq=0,element,count;

    printf("enter size of array:");
    scanf("%d",&n);

    printf("enter %d elements:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        count=1;
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>maxfreq){
            maxfreq=count;
            element=arr[i];
        }
    }
    printf("maximum frequecy element=%d\n",element);
    printf("frequecy=%d\n",maxfreq);

    return 0;
}