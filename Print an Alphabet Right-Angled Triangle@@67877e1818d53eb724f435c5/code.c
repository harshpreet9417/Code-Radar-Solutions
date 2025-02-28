// Your code here...
#include<stdio.h>
int main(){
    int m;
    scanf("%d",&m);
    n=char(m);
    for (int i=1;i<n;i++){
        for (int j=1;j<i;j++){
            printf("%c",j);
        }
    }
    printf("\n");
    return 0;
}