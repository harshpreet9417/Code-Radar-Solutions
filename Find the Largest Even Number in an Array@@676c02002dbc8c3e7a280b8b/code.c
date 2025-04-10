// Your code here...
#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int largest= array[0],n1=-1;
    for(int i=0;i<n;i++){
        if(array[i]>largest && array[i]%2==0){
            return  array[i];
        }
        else if (array[i]>largest && array[i]%2!=0 || array[i]%2!=0){
            return n1;
        }
        printf("%d",array[i]);
    }
    return 0;
}