// Your code here...
#include<stdio.h>
int main(){
    int m;
    scanf("%d",&m);
    for (int i=1;i<=m;i++){
        for (int j=0;j<=2*m -1;j++){
                printf("*");
            
        }
        printf("\n");
    }
    return 0;
}

