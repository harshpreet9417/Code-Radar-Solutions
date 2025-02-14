// Your code here...
#include <stdio.h>

void decimalToBinary(unsigned int num) {
    int binary[32];
    int index = 0;
    if (num == 0) {
        printf("0");
        return;
    }

    while (num > 0) {
        binary[index++] = num % 2;  
        num = num / 2;  
    }

    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
}

int main() {
    unsigned int num;
    scanf("%u", &num);  
    
    printf("");
    decimalToBinary(num);  

    return 0;
}
