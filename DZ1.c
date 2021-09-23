#include <stdio.h>

void main(){
    int c[64];
    int i=0, x=0;
    scanf("%d", &x);
    while(x>1){
        c[i]=x%2;
        x=x/2;
        i++;
    }
    c[i]=x;
    for(i;i>=0;i--) printf("%d", c[i]);
}
