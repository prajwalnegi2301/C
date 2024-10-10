#include <stdio.h>
#include <math.h>

void isarmstrong(int n) {
    int m = 0;
    int y = n;
    while (n > 0) {
        int num = n % 10;
        m = m + pow(num, 3);
        n = n / 10;
    }
    if (y == m) {
        printf("armstrong no");
    } else {
        printf("not an armstrong no");
    }
}

int main() {
    int n = 153;
    //scanf("%d", &n);
    isarmstrong(n);

    return 0;
}