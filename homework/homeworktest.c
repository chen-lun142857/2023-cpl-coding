//
// Created by user on 2023/9/23.
#include <stdio.h>
#include <math.h>

int main(void) {
    double p, q;
    scanf("%lf %lf", &p, &q);

    // 计算公式中的各项值
    double a = 3.0;
    double b = -2.0 * q;
    double c = (1.0/2.0) * q * q;
    double d = -(1.0/3.0) * p * p * p;

    // 计算根的值
    double discriminant = b * b - 3.0 * a * c;
    double temp1 = (-b + sqrt(discriminant)) / (3.0 * a);
    double temp2 = (-b - sqrt(discriminant)) / (3.0 * a);
    double x = temp1 + temp2;

    // 输出结果，保留三位小数
    printf("%.3lf\n", x);

    return 0;
}
