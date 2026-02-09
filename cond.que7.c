#include <stdio.h>
int main(){
    int ch;
    printf("Enter ch: ");
    scanf("%c",&ch);
    if ((ch>='A'&& ch<='Z') || (ch>='a' && ch<='z')){
        printf("ALPHABET");
    }
    else if((ch>='0' && ch<='9')){
        printf("DIGIT");
    }
    else{
        printf("Special Character");
    }
    return 0;
}