// Your code here...
#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int array[50];
    int even_count=0;
    int odd_count=0;
    for(i=0;i<n;i++){
        scanf("%d ",&array[i]);
        if(array[i]%2==0){
            even_count++;
        }
        else{
            odd_count++;
        }
    }
    printf("%d ",even_count);
    printf("%d",odd_count);
    return 0;
}