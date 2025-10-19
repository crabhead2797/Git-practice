#include <stdio.h>

// 두 수를 더하는 함수
int add(int a, int b) {
    return a + b;
}

// 두 수를 빼는 함수
int subtract(int a, int b) {
    return a - b;
}

// 두 수를 곱하는 함수
int multiply(int a, int b) {
    return a * b;
}

// 두 수를 나누는 함수 (0으로 나누기 방지)
double divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero!\n");
        return 0.0;
    }
    return (double)a / b;
}

// 프로그램 시작점
int main(void) {
    int x = 10, y = 5;

    printf("Add: %d + %d = %d\n", x, y, add(x, y));
    printf("Subtract: %d - %d = %d\n", x, y, subtract(x, y));
    printf("Multiply: %d * %d = %d\n", x, y, multiply(x, y));
    printf("Divide: %d / %d = %.2f\n", x, y, divide(x, y));

    return 0;
}
