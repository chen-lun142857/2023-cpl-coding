//
// Created by user on 2023/9/22.
//
#include<stdio.h>
int main(void){
    int n = 0;

    scanf("%d",&n);
    printf("%d\n",n/50);
    n = n % 50;
    printf("%d\n",n/20);
    n = n % 20;
    printf("%d\n",n/10);
    n = n % 10;
    printf("%d\n",n/5);
    n = n % 5;
    printf("%d\n",n);

    return 0;
}

