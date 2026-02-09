#include <stdio.h>
int main() {
    int amount;
    scanf("%d", &amount);
    if (amount >= 499){
        printf("Free Delivery");
    }else{
        printf("Delivery Charges Apply");
    } 
    return 0;
}
