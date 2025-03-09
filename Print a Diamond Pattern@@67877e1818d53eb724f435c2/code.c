// Your code here...
#include<stdio.h>
int main(){
    int m;
    scanf("%d",&m);
    for (i=0;i<=m;i++){
        for (j=0;j<=m;j++){
            if(i==m-1 || j==m-1){
                printf("*");
            }
        }
    }
    printf("\n");
    return 0;
}