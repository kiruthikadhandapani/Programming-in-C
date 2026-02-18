#include <stdio.h>
int main() {
    int N, sum=0,digit;
    scanf("%d", &N);
    for (; N!=0;N=N/10) {
        digit=N % 10;
        sum=sum+digit;
    }
    printf("%d", sum);
    return 0;
}
