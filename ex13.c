//백준 2439
#include <stdio.h>

int main() {
    int i; //i,j,n을 정의 
    int j;
    int n;
    scanf("%d", &n); //%d에 n을 대입
    for(i=1; i <=n; i++) { // 이거는 *의 줄이 몇개인지,, 그러니까 세로로 몇개인지를 말하는 줄 i가 1부터 시작되고 내가 입력한 숫자와 같을 때까지 늘어남. 
        for(j=1; j<=(n-i); j++) // j를 한 줄에서만 보는 거임, 한 줄 안에서 공백이 한개부터 몇개까지 늘릴 지 ,,
            printf(" ");
        for(j=1; j<=i; j++) // j를 한 줄에서만 보는 것임 이거는 이해됨 j가 i랑 같아질 때까지 줄마다 *의 수를 늘리겠다는 뜻
            printf("*");
        printf("\n");
    }
}