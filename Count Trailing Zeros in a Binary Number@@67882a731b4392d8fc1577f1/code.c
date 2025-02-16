// Your code here...
#include <stdio.h>
int countTrailingZeroes(int n) {
    int count = 0;
    while ((n & 1) == 0 && n != 0) {
        count++;
        n >>= 1;
    }
    return count;
}

int main() {
    int num;
    scanf("%d", &num);

    int result = countTrailingZeroes(num);
    printf(" %d\n", result);

    return 0;
}
