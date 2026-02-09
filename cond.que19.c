#include <stdio.h>
int main(){
    char ch;
    printf("enter :");
    scanf("%c",&ch);
    if(ch>='0' && ch<='9'){
        printf("Digit");
    }
    return 0;
}