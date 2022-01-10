// 백준 9498번 시험 점수 등급 환산 문제 
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if((100 >= n) && (90 <= n)) {
        printf("A");
    }

    else if((89 >= n) && (80 <= n)) {
        printf("B");
    }
    
    else if((79 >= n) && (70 <= n)) {
        printf("C");
    }

    else if((69 >= n) && (60 <= n)) {
        printf("D");
    }

    else if((59 >= n) && (0 <= n)) {
        printf("F");
    }
}