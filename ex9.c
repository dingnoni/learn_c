// 백준 2753번 윤년 계산 문제

#include <stdio.h>

int main() {
    int y; //y는 1보다 크거나 같고 4000보다 작거나 같음 
    scanf("%d", &y);
    if (y%4==0 && y%100!=0 || y%400==0) {
        printf("1");
    }
    else 
        printf("0");

    return 0;
}

