#include <stdio.h>
int main(){
    int batteryPercent,hours,remainingpercent;
    scanf("%d",&batteryPercent);
    scanf("%d",&hours);
    for(int i=0;i<hours;i++){
        scanf("%d",&remainingpercent);
        batteryPercent -= remainingpercent;

    }
    printf("Remaining Battery: %d%%",batteryPercent);
    return 0;

}