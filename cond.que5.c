#include <stdio.h>
int main(){
    int a;
    printf("enter any year:");
    scanf("%d",&a);
    if((a%4==0 && a%100!=0) || (a%400==0)){
        printf("Leap year");
    }else{
        printf("it is not leap year");
    }
    return 0;
}