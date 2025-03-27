// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int array[50];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int array[0]=min,int array[0]=max;
    for(i=0;i<n;i++){
    if(array[i]<array[0]){
        printf("%d",array[i]);
    }
    }
    for(i=0;i<n;i++){
        if(array[i]>array[0]){
            printf("%d",array[i]);
        }
    }
    return 0;
}