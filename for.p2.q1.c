#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int expense;
    int total = 0;
    int overspend = 0;
    for(int i=0;i<n;i++){
        scanf("%d", &expense);
        total += expense;
        if(expense > 1000){
            overspend++;
        }
    }
    printf("Total Expense: %d\n", total);
    printf("Overspend Days: %d", overspend);
    return 0;
}