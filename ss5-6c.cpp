#include <stdio.h>

int main () {
    int a, b, choice;

    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
     printf("Nhap so thu hai: ");
    scanf("%d", &b);

    do{
        printf("Nhap lua chon cua ban (1-5): ");
        scanf("%d", &choice);

         switch (choice)
    {
    case 1:
        printf("tong 2 so: %d\n ", a+b);
        break;
    case 2:
        printf("hieu 2 so: %d \n", a-b);
        break;
    case 3:
        printf("tich 2 so: %d \n", a*b);
        break;
    case 4:
        printf("thuong 2 so: %d \n", a/b);
        break;
    
    default:
        printf("chi nhap tu 1-5");
        break;
    }
    } while (choice != 5);

   
}
