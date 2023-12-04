#include <stdio.h>

void binary_8(int n) {
    char binary[11];
    for (int i = 0; i < 11; i++) {
        binary[10 - i] = (n >> i) & 1 ? '1' : '0';
    }
    binary[10] = '\0';
    printf("%s\n", binary);
}

int main(void) {
    int n;
    int answer;
    printf("Enter a number: ");
    scanf("%d", &n);
    if ((n < 512) && (n > -512)) {
        printf("Dec representation of %d is: ", n);
        binary_10_(n);
    }
    return 0;
}
