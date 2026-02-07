#include <stdio.h>
int main() {
    int a=10,b=50;
    int num;
    printf("enter num:");
    scanf("%d",&num);
    if(num <a || num >b){
        printf("yes");
    }else{
        printf("no");
    }
    return 0;
}