#include <stdio.h>

int main() {
    int a, b, min;

    printf("Nhap so nguyen duong thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so nguyen duong thu hai: ");
    scanf("%d", &b);

    min = (a < b) ? a : b;
    for(int i = min; i >= 1; i--) {
        if (a % i ==0 && b % i ==0) {
            printf("Uoc chung lon nhat la: %d", i);
            break;
        }
    }
    return 0;

}
