// Your code here...
#include <stdio.h>

int main(){
    int m,k;
    scanf("%d",&m);
    for (int i=1;i<=m;i++){
        for (int j=i;j<m;j++){
           printf(" ");
        }for (k=1;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}