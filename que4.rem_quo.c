#include <stdio.h>
int main(){
    int a,b;
    printf("enter 2 num to divide:");
    scanf("%d %d",&a,&b);
    int quo=a/b;
    printf("quotient is %d\n",quo);
    int rem=a%b;
    printf("reminder is %d",rem);
    return 0;
}