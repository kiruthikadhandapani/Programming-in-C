#include <stdio.h>
int main(){
    int n,rainmm,totalrain=0,countdays=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&rainmm);
        totalrain +=rainmm;

        if(rainmm>50){
        countdays++;

    }
}
    printf("Total Rainfall:%d\n",totalrain);
    printf("Heavy Rain Days:%d",countdays);
    return 0;
}

