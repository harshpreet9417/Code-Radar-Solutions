// Your code here...
#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int array[50];
    int even_count=0;
    int odd_count=0;
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
        if(i%2==0){
            even_count+=1;
        }
        if(i%2!=0){
            odd_count+=1;
        }
    }
    printf("%d",even_count);
    printf("%d",odd_count);
    return 0;
}