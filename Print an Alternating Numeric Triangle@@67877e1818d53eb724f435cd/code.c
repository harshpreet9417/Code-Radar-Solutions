// Your code here...
#include<stdio.h>
int main(){
    int m;
    scanf("%d",&m);
    for (int i=1;i<m;i++){
        for (int j=1;j<i;j++){
            if (i==j){
                printf("1");
            }
            else {
                printf("0";)
            }
            printf("\n");
        }
    }return 0;
}