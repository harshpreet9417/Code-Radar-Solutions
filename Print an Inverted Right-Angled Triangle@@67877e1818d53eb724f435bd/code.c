// Your code here...
#include<stdio.h>
int main(){
    int m;
    scanf("%d",&m);
    for (int i=m;i>=0;i--){
        for (int j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}