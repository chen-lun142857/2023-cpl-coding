//
// Created by user on 2023/9/16.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int high = 100;
    int chance = 7;
    printf("The computer will generate a random number between 1 and %d\n"
           "You have %d chances",high,chance);

    srand(time(NULL)); //use current time as seed for random generator
    int secret = rand();
    return 0;
}