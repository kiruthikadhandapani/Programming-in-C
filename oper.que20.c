#include <stdio.h>
int main(){
    int a,b,num;
    printf("Enter the val of a nd b:\n");
    scanf("%d %d",&a,&b);
    num= (a>b)? printf("%d",a):printf("%d",b);
    return 0;
}