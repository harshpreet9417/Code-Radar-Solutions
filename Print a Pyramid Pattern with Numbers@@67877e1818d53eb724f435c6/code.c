// Your code here...
#include <stdio.h>

int main(){
  int m,k=1;
  scanf("%d",&m);
  for (int i=1;i<=m;i++){
      for (int j=1;j<=i;j++){
          printf("%d",k);
      }
      printf("\n");
  }
    return 0;
}