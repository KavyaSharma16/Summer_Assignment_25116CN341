#include<stdio.h>
int main() {
    int start,end,i,j,flag;

    printf("enter start and end of range:");
    scanf("%d%d",&start,&end);

    printf("prime numbers are:");

    for(i=start;i<=end;i++){
        if(i<=1)
        continue;

        flag=0;

        for(j=2;j<=i/2;j++){
            if(i%j==0){
                flag=1;
                break;
            }
        }
        if(flag==0)
        printf("%d",i);
    }
    return 0;
}