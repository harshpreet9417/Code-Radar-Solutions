// Your code here...
#include<stdio.h>
int main(){
    int m;
    char alpha;
    scanf("%d",&m);
    alpha='A' +(m-1);
    for (int i=1;i<=m;i++){
        for (int j=1;j<=i;j++){
            printf("%c ",alpha);
            alpha++;
        }
        printf("\n");
    }
    
    return 0;
}