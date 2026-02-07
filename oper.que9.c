#include <stdio.h>
int main() {
    int a=10,b=50;
    int num;
    scanf("%d",&num);
    if(num > a && num < b){
        printf("is between 10 and 50");
    }else{
        printf("is not between 10 and 50");
    }
    return 0;
}