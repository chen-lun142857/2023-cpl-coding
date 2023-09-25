//
// Created by user on 2023/9/23.
//
#include <stdio.h>
#include <math.h>

int main(void){
    double p = 0;
    double q = 0;
    scanf("%lf %lf",&p,&q);
    double x = cbrt((-q/2.0)+ pow((pow(q/2.0,2.0)+ pow(p/3.0,3.0)),1.0/2.0)) + cbrt((-q/2.0)- pow((pow(q/2.0,2.0)+pow(p/3.0,3.0)),1.0/2.0));
    printf("%.3lf",x);

    return 0;
}