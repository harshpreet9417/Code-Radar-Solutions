// Your code here...
#include<stdio.h>
int main(){
    int m;
    scanf("%d",&m);
    for (int i=0;i<=m;i++){
        for (int j=0;j<=m;j++){
            if (i==0 && j== 0 || i==(m-1) && j== (m-1)){
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}