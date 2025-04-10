// Your code here...
#include <stdio.h>
int main()
{
    int n,array[50];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int largest=array[0],second_largest=-1;
    for(int i=0;i<n;i++){
        if(array[i]>largest){
            second_largest=largest;
            largest=array[i];
        }
        else if(array[i]<0){
            second_largest=largest;
            largest=array[i];
        }
        else if(array[i]>second_largest && array[i]!=largest){
            second_largest=array[i];
        }
    }
    printf("%d",second_largest*largest);
    return 0;
}
