//baekjoon 2438
#include <stdio.h>

int main () {
    int i, j, n;
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        for (j=0; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }
}
