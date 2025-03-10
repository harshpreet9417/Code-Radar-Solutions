// Your code here...
#include<stdio.h>
int main(){
    int m;
    scanf("%d",&m);
    for (int i=0;i<=m;i++){
        for (int j=0;j<=m;j++){
            if(i==m-1 || j==m-1){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

