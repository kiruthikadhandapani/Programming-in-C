#include <stdio.h>
int main(){
    char str[100];
    int i = 0, valid = 0;  
    scanf("%s", str);  
    while(str[i] != '\0'){
        if(str[i]>='A' && str[i]<='Z'){
            valid=1;
            break;
        }
        i++;
    }
    if(valid)
        printf("Valid");
    else
        printf("Invalid");
        
    return 0;
}