#include <stdio.h>
int main() {
    char str[100];
    int i = 0, count = 1;
    fgets(str, sizeof(str), stdin);
    if(str[0] == '\0') {
        printf("0");
        return 0;
    }
    while(str[i] != '\0') {
        if(str[i] == ' ')
            count++;
        i++;
    }
    printf("%d", count);
    return 0;
}