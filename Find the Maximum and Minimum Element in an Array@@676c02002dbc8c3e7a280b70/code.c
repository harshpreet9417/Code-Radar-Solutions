// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int array[50],i;
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int min=array[0], max =array[0];
    for(i=0;i<n;i++){
    if(array[i]<min){
        min=array[i];
    }
    }
    for(i=0;i<n;i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    printf("%d ",min);
    printf("%d",min);
    return 0;
}