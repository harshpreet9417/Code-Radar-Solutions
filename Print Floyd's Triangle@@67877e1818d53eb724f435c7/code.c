// Your code here...
#include <stdio.h>
int main(){
    int m,k=1;
    scanf("%d",&m);
    for (int i=1;i<=m;i++){
        for (int j=i;j<=i;j++){
            printf("%d",k);
            k++;
        }
        printf("\n")
    }
    return 0;
}
