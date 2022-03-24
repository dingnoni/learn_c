//백준 15596번

#include <stdio.h>

int main() {
    int fib[1000] = {1, 1}; //n을 정의

    for(int i=2; i<=999; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
    printf("%d\n", fib[8]);

}
