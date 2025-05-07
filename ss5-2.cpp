#include <stdio.h>

int main() {
    int target = 42; 
    int guess;        

    printf("Hãy đoán số nguyên cho trước!\n");

    do {
        printf("Nhập một số nguyên: ");
        scanf("%d", &guess);

        if (guess != target) {
            printf("Sai rồi! Hãy thử lại.\n");
        }
    } while (guess != target);

    printf("Chúc mừng! Bạn đã đoán đúng số %d.\n", target);
    return 0;
}
