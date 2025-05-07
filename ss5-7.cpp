#include <stdio.h>

int ucln(int a, int b) {
    while (a != b) {
        if (a > b) {
            a -= b;  
        } else {
            b -= a;  
        }
    }
    return a; 
}

int main() {
    int num1, num2;

    do {
        printf("Nhập số nguyên dương thứ nhất: ");
        scanf("%d", &num1);
        printf("Nhập số nguyên dương thứ hai: ");
        scanf("%d", &num2);

        if (num1 <= 0 || num2 <= 0) {
            printf("Cả hai số phải là số nguyên dương. Vui lòng nhập lại!\n");
        }
    } while (num1 <= 0 || num2 <= 0);

    int result = ucln(num1, num2);

    printf("Ước chung lớn nhất của %d và %d là: %d\n", num1, num2, result);

    return 0;
}
