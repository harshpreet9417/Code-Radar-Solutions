// Your code here...
// #include<stdio.h>
// int main(){
//     int m;
//     char alpha,beta;
//     scanf("%d",&m);
//     alpha='A';
//     beta='A' + 1;
//     for (int i=1;i<=m;i++){
//         for (int j=1;j<=i;j++){
//             printf("%c ",alpha);

//         }
//         printf("\n");
//     }
    
//     return 0;
// }


#include <stdio.h>

int main(){
    int m;
    char alpha='A';
    scanf("%d",&m);
    for (int i=1;i<=m;i++){
        for (int j=1;j<=i;j++){
            if(i==j){
            printf("%c ",alpha);}
            else{
                printf("%c ",alpha);
                alpha++;
            }
        }
        printf("\n");
    }
    return 0;
}