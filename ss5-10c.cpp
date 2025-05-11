#include <stdio.h>

int main () {
    int number,numberFirst, length =0;

    printf("Nhap mot so nguyen bat ki: ");
    scanf("%d", &number);

    numberFirst = number;
    while(number != 0) {
        length++;
        number /= 10;
    }
    
    for (int i = 1; i <= length; i++) {
        printf("Chu so thu %d: %d\n", i, numberFirst%10);
        numberFirst /= 10;
    }
    return 0;
}
