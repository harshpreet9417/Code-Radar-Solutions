// Your code here...
#include <stdio.h>
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    for (int i=1;i<=m;i++){
        for (int j=i;j<=n;j++){
            printf("%d",j);
            j++;
        }
    }
    return 0;

}