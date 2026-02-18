#include <stdio.h>
int main() {
    int N, reversed = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &N);
    for (; N!=0;N=N /10) {
        digit = N % 10;                
        reversed = reversed * 10 + digit; 
    }
    printf("Reversed Number: %d", reversed);
    return 0;
}
