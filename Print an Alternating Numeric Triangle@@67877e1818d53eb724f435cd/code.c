// Your code here...
#include<stdio.h>
int main(){
    int m;
    scanf("%d",&m);
    for (int i=1;i<=m;i++){
        for (int j=1;j<=i;j++){
            if (i%2==0 && j==0 || i==j || i%2!=0 ){
                printf("1");
            }
            else {
                printf("0 ");
            }
            
        }
        printf("\n");
    }return 0;
}