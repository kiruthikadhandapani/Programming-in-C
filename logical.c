#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the val of a nd b nd c:\n");
    scanf("%d %d %d",&a,&b,&c);
    printf("or?%d\n",a>b || a>c);
    printf("and?%d\n",a>b && a>c);
    printf("not?%d\n",!(a>b && a>c));
    return 0;
}
    
