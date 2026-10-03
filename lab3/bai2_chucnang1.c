#include <stdio.h>

// Khai bao cac ham chuc nang
void tinhHocLuc() {
    float diem;
    printf("\n--- CHUC NANG 1: TINH HOC LUC ---\n");
    printf("Nhap diem so cua sinh vien (0.0 - 10.0): ");
    scanf("%f", &diem);

    if (diem < 0.0 || diem > 10.0) {
        printf("Diem so nhap vao khong hop le!\n");
    } else if (diem >= 9.0) {
        printf("Hoc luc: Xuat sac\n");
    } else if (diem >= 8.0) {
        printf("Hoc luc: Gioi\n");
    } else if (diem >= 6.5) {
        printf("Hoc luc: Kha\n");
    } else if (diem >= 5.0) {
        printf("Hoc luc: Trung binh\n");
    } else if (diem >= 3.5) {
        printf("Hoc luc: Yeu\n");
    } else {
        printf("Hoc luc: Kem\n");
    }
}

void giaiPTBacHai() {
    printf("\n--- CHUC NANG 2: GIAI PHUONG TRINH BAC HAI ---\n");
    // Code xu ly giai pt bac hai se viet o day
}

void tinhTienDien() {
    printf("\n--- CHUC NANG 3: TINH TIEN DIEN ---\n");
    // Code xu ly tinh tien dien se viet o day
}

int main() {
    int luaChon;

    do {
        // Hien thi Menu
        printf("\n+---------------------------------------+\n");
        printf("|              MENU LAB 3               |\n");
        printf("+---------------------------------------+\n");
        printf("| 1. Tinh hoc luc                       |\n");
        printf("| 2. Giai phuong trinh bac hai          |\n");
        printf("| 3. Tinh tien dien                     |\n");
        printf("| 0. Thoat                              |\n");
        printf("+---------------------------------------+\n");
        printf("Moi ban chon chuc nang (0-3): ");
        scanf("%d", &luaChon);

        switch (luaChon) {
            case 1:
                tinhHocLuc();
                break;
            case 2:
                giaiPTBacHai();
                break;
            case 3:
                tinhTienDien();
                break;
            case 0:
                printf("\nDa thoat chuong trinh. Tam biet!\n");
                break;
            default:
                printf("\nLoi: Lua chon khong hop le! Vui long nhap tu 0 den 3.\n");
                break;
        }
    } while (luaChon != 0);

    return 0;
}