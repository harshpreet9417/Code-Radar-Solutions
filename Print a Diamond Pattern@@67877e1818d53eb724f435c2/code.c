// Your code here...

#include <stdio.h>

int main(){
  int m;
  scanf("%d",&m);
  for (int i=1;i<=m;i++){
      for (int j=1;j<=m-i;j++){
          printf(" ");
      }
      for (int k=1;k<=(2*i -1);k++){
          printf("*");
      }
      printf("\n");
  }
  for (int i=m;i<=1;i++){
      for (int j=1;j<=m-i;j++){
          printf(" ");
      }
      for (int k=1;k<=(2*i -1);k++){
          printf("*");
      }
      printf("\n");
  }
    return 0;
}
    
