// Your code here...
#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int largest= array[0];
    for(int i=0;i<n;i++){
        if(array[i]>largest && array[i]%2==0){
            printf("%d",array[i]);
        }
        else{
            printf("0");
        }
    }
    return 0;
}