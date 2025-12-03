#include <stdio.h>

int sumOfDigits(int n) {
    if (n == 0) return 0;
    return (n % 10) + sumOfDigits(n / 10);
}

int digitalRoot(int n) {
    if (n < 10) return n;
    int sum = sumOfDigits(n);
    return digitalRoot(sum);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Digital Root of %d is %d\n", num, digitalRoot(num));
    return 0;
}
