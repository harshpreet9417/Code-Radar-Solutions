// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int array[50],i;
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int min=array[0],int max =array[0];
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