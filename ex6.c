#include <stdio.h> // standard input output

int main() {
    char ch;
    scanf("%c", &ch);
    if ((ch < 64) || (ch > 90)) {
        printf("대문자를 입력하세요");
    } else {
        printf("%d\n", ch - 64);
    }
    return 0;  
}
