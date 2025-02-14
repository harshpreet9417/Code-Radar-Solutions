// Your code here...
#include <stdio.h>

int countLeadingZeros(unsigned int num) {
    int count = 0;
    for (int i = 31; i >= 0; i--) {
        if ((num >> i) & 1) {
            break;  
        }
        count++;}

    return count;
}

int main() {
    unsigned int num;
    scanf("%u", &num);
    
    int leadingZeros = countLeadingZeros(num);
    printf("%d", leadingZeros);
    
    return 0;
}
