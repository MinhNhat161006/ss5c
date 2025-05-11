#include <stdio.h>

int main() {
    int a, b, max;

    printf("Nhap so nguyen duong thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so nguyen duong thu hai: ");
    scanf("%d", &b);

    max = (a>b) ? a : b;
    while(max % a != 0 || max % b != 0) {
        max++;
    }
    printf("Boi chung nho nhat la: %d", max);
    return 0;

}
