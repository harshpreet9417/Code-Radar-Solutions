// Your code here...
#include<stdio.h>
int main(){
    int m;
    scanf("%d",&m);
    for (int i=0;i<=m;i++){
        for (int j=i;j>0;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}