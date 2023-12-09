#include <stdio.h>

void binary_8(int n) {
    char binary[33];
    for (int i = 0; i < 33; i++) {
        binary[32 - i] = (n >> i) & 1 ? '1' : '0';
    }
    binary[32] = '\0';
    printf("%s\n", binary);
}

int main(void) {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Dec representation of %d is: ", n);
    binary_8(n);
    return 0;
}
