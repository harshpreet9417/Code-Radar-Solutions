// Your code here...
#include<stdio.h>
int main(){
    int a,i;
    scanf("%d",&a);
    for (i<=12){
        if(i%2!=0){
            printf("%d",31);
        }
        else if(i%2==0 && i!=2){
            printf("%d",30);
        }
        else{
            printf("%d",28);
        }
    }return 0;
}