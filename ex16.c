//타일 채우기 문제

#include <stdio.h>

int main() {
    int f[100] = {1, 1}; //f() 정의

    for(int i=2; i<=99; i++) {
        f[i]= f[i-1]+ 2*f[i-2];
    }
    printf ("%d\n", f[3]);
}