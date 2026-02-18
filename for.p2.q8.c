#include  <stdio.h>
int main(){
    int n,loss,totalloss=0,count;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&loss);
        totalloss+=loss;
        if(loss>100){
            count++;
        }
    }
        printf("%d",totalloss);
        printf("%d",count);
        return 0;
    }