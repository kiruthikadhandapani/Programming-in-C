#include <stdio.h>
int main(){
    int passengers, ticketamt, total_amt = 0;
    scanf("%d", &passengers);
    for(int i = 0; i<passengers;i++){
        scanf("%d",&ticketamt);
        total_amt+=ticketamt;
    }
    printf("Total Collection: ₹%d", total_amt);
    return 0;
}