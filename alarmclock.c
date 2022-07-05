//baekjoon 2884
#include <stdio.h>

int main () {
    int H, M;
    scanf("%d %d",&H, &M);

    if (H == 0) {
        if (M >= 45) {
            printf("%d %d\n", H, M-45);
        }
        else if (M < 45) {
            printf("23 %d\n", M+15);
        }
    }
    else if (H != 0) {
        if (M >= 45) {
            printf("%d %d\n", H, M-45);
        }
        else if (M < 45) {
            printf("%d %d\n",H-1, M+15);
        }
    }
    return 0;
}