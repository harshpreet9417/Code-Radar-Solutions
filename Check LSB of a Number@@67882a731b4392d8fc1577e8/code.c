#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    for ( i=sizeof(a)*8 -1 ;i>=0;i--){
        printf("%d",(n>>i) & 1);
    }
    return 0;
}