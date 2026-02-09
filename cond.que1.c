#include <stdio.h>
int main(){
    int a;
    printf("Enter a: ");
    scanf("%d",&a);
    if(a>0){
        printf("positive");
    }
    else if(a<0){
        printf("Negative");
    }
    else{
        printf("Zero");
    }
    return 0;
}