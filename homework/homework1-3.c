//
// Created by user on 2023/9/22.
//
#include <stdio.h>
#include <math.h>
int main(void){
    double Pi1 = 0;
    double Pi2 = 0;
    Pi1 = log(pow(640320,3.0)+744)/ sqrt(163);
    printf("%.15f\n", Pi1);
    Pi2 = 4 * (4 * atan(1.0/5)- atan(1.0/239));
    printf("%.15f\n",Pi2);
    return 0;
}