// Your code here...
#include<stdio.h>
int main(){
    int a,i;
    scanf("%d",&a);
    if (a<1 || a>12){
        printf("Invalid Month");
    }
    else if(a==2){
        printf("28");
    } else if (a==4 || a==6 || a==9|| a==11){
        printf("30");
    }else{
        printf("31");
    }
    
    return 0;
}