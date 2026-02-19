#include <stdio.h>
int main() {
    int n=5;
    for(int i=n; i>=1;i--) {
        for(int j=0; j<n-i;j++)
            printf(" ");
        for(int star = 1; star <= 2*i-1;star++)
            printf("*");

        printf("\n");
    }

    return 0;
}
