#include <stdio.h>
int main() {
    float toan, van, anh, tong, trungBinh;

    printf("Nhap diem Toan: ");
    scanf("%f", &toan);
    printf("Nhap diem Van: ");
    scanf("%f", &van);
    printf("Nhap diem Anh: ");
    scanf("%f", &anh);

    if (toan < 0 || toan > 10 || van < 0 || van > 10 || anh < 0 || anh > 10) {
        printf("�iem nhap v�o kh�ng hop. Vui l�ng nhap diem tu 0 den 10.\n");
        return 1; // K?t th�c chuong tr�nh
    }

    tong = toan + van + anh;
    trungBinh = tong / 3;

    printf("Tong diem: %.2f\n", tong);
    printf("�iem trung binh: %.2f\n", trungBinh);

    return 0;
}
