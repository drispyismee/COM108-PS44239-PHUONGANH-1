#include <stdio.h>

int main() {
    float diemtb;
    int hanhkiem;

   
    printf("Nhap diem trung binh: ");
    scanf("%f", &diemtb);
    printf("Nhap hanh kiem (1 = Tot, 0 = Khac): ");
    scanf("%d", &hanhkiem);

  
    float diem_trung_binh = diemtb;
    int hanh_kiem = hanhkiem;

    // dieu kien xet hoc bong
    int dk1 = diem_trung_binh >= 8.0;
    int dk2 = hanh_kiem == 1;

   
    int ketqua = dk1 && dk2;

   
    printf("Dieu kien diem trung binh >= 8: %d\n", dk1);
    printf("Dieu kien hanh kiem tot: %d\n", dk2);
    printf("Ket qua xet hoc bong (1: Dat, 0: Khong dat): %d\n", ketqua);

    return 0;
}