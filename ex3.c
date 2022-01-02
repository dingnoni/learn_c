//4과목 점수의 평균을 구하여 출력하는 프로그램

#include <stdio.h>

int main() 
{
    //선언 및 초기화, 초기화란 c에서 이미 선언된 변수에 값을 부여하는 것
    int a = 80;
    int b = 30;
    int c = 52;
    int d = 100;

    int total = a + b + c + d;
    float average = total / 4.0; // 무조건 소수점까지 써야함

    printf("평균은 %.02f점 입니다. \n" , average);
}