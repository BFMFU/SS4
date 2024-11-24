#include <stdio.h>

int main() {
    int month;

    // Y�u c?u ngu?i d�ng nh?p v�o s? th�ng
    printf("Nhap vao so thang (1-12): ");
    scanf("%d", &month);

    // Ki?m tra s? th�ng v� in ra s? ng�y
    switch(month) {
        case 1: 
        case 3:
        case 5: 
        case 7: 
        case 8: 
        case 10: 
        case 12:
            printf("Thang %d co 31 ngay.\n", month);
            break;
        case 4: 
        case 6: 
        case 9:
        case 11: 
            printf("Thang %d co 30 ngay.\n", month);
            break;
        case 2:
            printf("Thang 2 co 28 hoac 29 ngay (phu thuoc vao nam nhuan).\n");
            break;
        default:
            printf("So thang %d khong hop le.\n", month); 
    }

    return 0;
}

