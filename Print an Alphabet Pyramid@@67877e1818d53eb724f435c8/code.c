// Your code here...
#include <stdio.h>

int main(){
    int m;
    scanf("%d",&m);
    for (int i=1;i<=m;i++){
        char alpha='A';
        for (int j=1;j<=i;j++){
            printf("%c ",alpha++);
        }
        printf("\n");
    }
    return 0;
}