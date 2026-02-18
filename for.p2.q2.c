#include <stdio.h>
int main(){
    int n,withdrawal,total_withdrawal=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&withdrawal);
        total_withdrawal  += withdrawal;
    }
        if (total_withdrawal <=10000){
            printf("Approved");
        }else{
            printf("Limit Exceeded");
        }
return 0;
}