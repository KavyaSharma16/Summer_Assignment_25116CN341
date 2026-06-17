#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int number,guess,attempts=0;

    srand(time(0));
    number=rand()%100+1;
    printf("guess the number(1-100)\n");
    do{
        printf("enter ur guess:");
        scanf("%d",&guess);
        attempts++;

        if(guess>number)
        printf("too high!!!\n");
        else if(guess<number)
        printf("too low!!!\n");
        else
        printf("correct!!!you guessed the number in %d attempts\n",attempts);
    }while(guess!=number);

    return 0;    
    }
