// Your code here...
#include<stdio.h>
int main(){
    int a,i;
    scanf("%d",&a);
    for (a<=12){
        if(a%2!=0){
            printf("%d",31);
        }
        else if(a%2==0 && a!=2){
            printf("%d",30);
        }
        else{
            printf("%d",28);
        }
    }return 0;
}