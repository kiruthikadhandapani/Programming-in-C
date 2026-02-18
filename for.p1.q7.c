#include<stdio.h>
int main(){
    int num,sum=0;
    scanf("%d",&num);
    for(int i=2;i<=num;i++){
        if(i%2==0){
           sum=sum+i;
        }
    }
    printf("%d\n",sum);
    return 0;
}