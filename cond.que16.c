#include <stdio.h>
int main(){
    int a,b,c;
    printf("enter sides of a b and c:\n");
    scanf("%d %d %d",&a,&b,&c );
    if(a==b && b==c){
        printf("Equilateral triangle");
    }
    else{
         printf("not Equilateral triangle");
    }
    return 0;
}