#include <stdio.h>

void tinhHocLuc(){
    printf("\n--- CHUC NANG 1: TINH HOC LUC ---\n");
    // Code xu ly tinh hoc luc se viet o day
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