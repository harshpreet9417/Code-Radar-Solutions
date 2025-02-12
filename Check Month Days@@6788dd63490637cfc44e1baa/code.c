// Your code here...
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for (i<=12){
        if(i%2!=0){
            printf("31");
        }
        else if(i%2==0 && i!=2){
            printf("30");
        }
        else{
            printf("28");
        }
    }return 0;
}