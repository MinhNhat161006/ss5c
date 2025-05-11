#include <stdio.h>

int main () {
    int choice, a, b, c;

       do {
        printf("\nMENU\n");
        printf("1. Nhap 3 so\n");
        printf("2. Tong 3 so\n");
        printf("3. Trung binh cong 3 so\n");
        printf("4. So nho nhat\n");
        printf("5. So lon nhat\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

         switch(choice) {
            case 1: 
            printf("Nhap so thu nhat: ");
            scanf("%d", &a);
             printf("Nhap so thu hai: ");
            scanf("%d", &b);
             printf("Nhap so thu ba: ");
            scanf("%d", &c);
            printf("3 so ban nhap la: %d %d %d", a, b, c);
            break;

            case 2:
            printf("tong 3 so la: %d", a+b+c);
            break;

            case 3:
            printf("trung binh cong cua 3 so la: %d", (a+b+c)/3);
            break;

            case 4:
            if(a<b && a<c) {
                printf("so nho nhat la: %d", a);
            } 
             if(b<a && b<c) {
                printf("so nho nhat la: %d", b);
            }
             if(c<a && c<b) {
                printf("so nho nhat la: %d", c);
            }
            break;

            case 5:
             if(a>b && a>c) {
                printf("so lon nhat la: %d", a);
            } 
             if(b>a && b>c) {
                printf("so lon nhat la: %d", b);
            }
             if(c>a && c>b) {
                printf("so lon nhat la: %d", c);
            }
            break;

            case 6:
            printf("Da thoat chuong trinh");
            break;

            default:
            printf("vui long nhap tu 1-6");
            break;
        }
        } while (choice != 6);

       
            return 0;
}
