#include <stdio.h>

// �� ���� ���ϴ� �Լ�
int add(int a, int b) {
    return a + b;
}

// �� ���� ���� �Լ�
int subtract(int a, int b) {
    return a - b;
}

// �� ���� ���ϴ� �Լ�
int multiply(int a, int b) {
    return a * b;
}

// �� ���� ������ �Լ� (0���� ������ ����)
double divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero!\n");
        return 0.0;
    }
    return (double)a / b;
}

// ���α׷� ������
int main(void) {
    int x = 10, y = 5;

    printf("Add: %d + %d = %d\n", x, y, add(x, y));
    printf("Subtract: %d - %d = %d\n", x, y, subtract(x, y));
    printf("Multiply: %d * %d = %d\n", x, y, multiply(x, y));
    printf("Divide: %d / %d = %.2f\n", x, y, divide(x, y));

    return 0;
}
