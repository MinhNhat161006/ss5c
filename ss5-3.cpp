#include <stdio.h>

int main() {
    int n;      
    int sum = 0; 

    do {
        printf("Nhập một số nguyên dương: ");
        scanf("%d", &n);

        if (n <= 0) {
            printf("Số phải là số nguyên dương lớn hơn 0. Vui lòng nhập lại.\n");
        }
    } while (n <= 0);

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Tổng các số từ 1 đến %d là: %d\n", n, sum);

    return 0;
}
