#include <stdio.h>
int main(){
    char n[100];
    int a;
    char h[100];
    scanf("%s %d",&n,&h);
    scanf("%s",&h);
    printf("Name: %s\n",n);
    printf("Age: %d\n",a);
    printf("Hobby: %s",h);
    return 0;
}