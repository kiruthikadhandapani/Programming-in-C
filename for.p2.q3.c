#include <stdio.h>
int main(){
    int total=0,n,units;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&units);
        total += units;
    }
    printf("Total Units: %d",total);
    return 0;

}
