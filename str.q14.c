#include <stdio.h>
int main() {
    char str[100], copy[100];
    int i = 0;
    scanf("%s", str);
    while(str[i] != '\0') {
        copy[i] = str[i];
        i++;
    }
    copy[i] = '\0';
    
    printf("%s", copy);
    return 0;
}