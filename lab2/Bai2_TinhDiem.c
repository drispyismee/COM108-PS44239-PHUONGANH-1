#include <stdio.h>

int main() {
    int toan, ly, hoa;
    float diemtoan, diemly, diemhoa;
    printf("Nhap diem toan: ");
    scanf("%d", &toan);
    printf("Nhap diem ly: ");
    scanf("%d", &ly);
    printf("Nhap diem hoa: ");
    scanf("%d", &hoa);
    diemtoan = toan;
    diemly = ly;
    diemhoa = hoa;
    float tinh_diem_trung_binh = ((diemtoan * 3 + diemly * 2 + diemhoa * 1))/ 6;
    printf("Diem trung binh: %.2f", tinh_diem_trung_binh);

    return 0;
}