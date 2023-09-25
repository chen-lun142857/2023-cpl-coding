//
// Created by user on 2023/9/22.
//
#include <stdio.h>

int main(void){
    char month[10];
    char weekday[10];
    int day = 0;
    int year = 0;
    int hour = 0;
    int minute = 0;
    int second = 0;
    scanf("%s %d %d %s %d %d %d",month,&day,&year,weekday,&hour,&minute,&second);
    char abb_month[4] = {month[0],month[1],month[2],'\0'};
    char abb_weekday[4] = {weekday[0],weekday[1],weekday[2],'\0'};
    printf("%s %s %02d %02d:%02d:%02d %04d",abb_weekday,abb_month,day,hour,minute,second,year);
    return  0;
}