#include <stdio.h>

void binary_8(int n, int bit) {
    char binary[bit + 1];
    for (int i = 0; i < bit + 1; i++) {
        binary[bit - 1 - i] = (n >> i) & 1 ? '1' : '0';
    }
    binary[bit] = '\0';
    printf("%s   \n", binary);
}
int counter_bytes(int n) {
    int count = 2;
    int st = 2;
    if ((n >= 1073741823) || (n <= -1073741824)){
        count = 32;
        return count;
    }
    while (n >= st){
        st = st * 2;
        count++;
    }
    return count;
}

int main(void) {
    int n, bit;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Dec representation of %d is: ", n);
    if (n < 0){
        n = n * -1;
        bit = counter_bytes(n);
        n = n * -1;
    }
    else{
        bit = counter_bytes(n);
    }
    binary_8(n, bit);
    return 0;
}
