// Your code here...
#include<stdio.h>
int main(){
    int m;
    scanf("%d",&m);
    for (int j=0;j<=m;j++){
        for (int i=0;i<=j;i++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}