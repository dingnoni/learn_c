// baekjoon 9498
#include <stdio.h>

int main() {
    int score;
    printf("enter your score: ");
    scanf("%d", &score);

    if ((score >= 90) && (score <= 100)) {
        printf("Your grade is A\n");
    }

    else if ((score >= 80) && (score <= 89)) {
        printf("Your grade is B\n");
    }

    else if ((score >= 70) && (score <= 79)) {
        printf("Your grade is C\n");
    }

    else if ((score >= 60) && (score <= 69)) {
        printf("Your grade is D\n");
    }

    else if ((score >= 0) && (score <= 59)) {
        printf("Your grade is F\n");
    }
}