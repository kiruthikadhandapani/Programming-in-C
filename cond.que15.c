#include <stdio.h>
int main(){
    int a,b,c;
    printf("enter angles of a b and c:\n");
    scanf("%d %d %d",&a,&b,&c );
    if(a+b+c==180){
        printf("valid triangle");
    }
    else{
        printf("not a triangle");

    }
return 0;
}