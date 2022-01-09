#include <stdio.h>

int main() {
    char n;
    scanf("%c", &n);
    if ((n >= 'A') && (n <= 'Z')) {
        printf ("Upper Case");
    }
    else if (n <= 'z' && n >= 'a') {
        printf ("Lower case");
    }
    else if (n > 'z' || n < 'A') {
        printf ("non-alpabetical character");
    }
}