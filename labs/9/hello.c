#include <stdlib.h>
#include <stdio.h>
int sign(int num) {
    if (num > 0) {
        return 1;
    }
    else if (num < 0) {
        return -1;
    }
    else {
        return 0;
    }
}
int maxx(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    }
    else {
        return num2;
    }
}
int minn(int num1, int num2) {
    if (num1 < num2) {
        return num1;
    }
    else {
        return num2;
    }
}


int main()
{
    int i = -8, j = -5, l = 12;
    int i_k, l_k, j_k, hod;
    for (hod = 1; hod < 51; hod++) {
        i_k = (((i * i) / (abs(j - l) + hod + 1)) - ((j * j) / (abs(i - l) + hod + 1))) % 30;
        j_k = (sign(l) * minn(i, j)) - (sign(j) * maxx(i, l)) + hod;
        l_k = (i - j) * (j - l) * (l - i) % 20;
        i = i_k;
        l = l_k;
        j = j_k;
        if (((j - i) >= 10) && ((j + i) <= 10) && (i >= -10)) {
            printf("hod = %d ", hod);
            printf("i = %d ", i);
            printf("j = %d ", j);
            printf("l = %d\n ", l);
            return 0;
        }
    }
    printf("Failure: hod = %d ", hod);
    printf("i = %d ", i);
    printf("j = %d ", j);
    printf("l = %d\n ", l);
    return 0;
}