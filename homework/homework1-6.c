//
// Created by user on 2023/9/23.
//
#include <stdio.h>
#define G 6.674e-11
#define M 77.15
int main(void){
    double m = 0;
    double R = 0;

    scanf("%lf%lf",&m,&R);

    double Gravity = (G * M * m)/(R * R);

    printf("%.3e",Gravity);

    return 0;
}