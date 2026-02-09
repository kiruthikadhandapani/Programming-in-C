#include <stdio.h>
int main(){
    int a,b;
    char ternary;
    printf("Enter the val of a nd b:");
    scanf("%d %d",&a,&b);
    ternary=a<b?printf("a is smaller"):"b is smaller";
    return 0;

}