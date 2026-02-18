#include <stdio.h>
int main(){
    int table,multi;
    scanf("%d",&table);
    for(int i=1;i<=10;i++){
        multi=table*i;
        printf("%d \n",multi);
    }
    return 0;
}