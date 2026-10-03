#include <stdio.h>
#include <math.h>

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
    float a, b, c;
    float delta, x, x1, x2;

    printf("\n--- CHUC NANG 2: GIAI PHUONG TRINH BAC HAI ---\n");
    printf("Nhap he so a: ");
    scanf("%f", &a);
    printf("Nhap he so b: ");
    scanf("%f", &b);
    printf("Nhap he so c: ");
    scanf("%f", &c);

    if (a == 0) {
        // Truong hop phuong trinh bac nhat: bx + c = 0
        if (b == 0) {
            if (c == 0) {
                printf("Phuong trinh co vo so nghiem.\n");
            } else {
                printf("Phuong trinh vo nghiem.\n");
            }
        } else {
            x = -c / b;
            printf("Phuong trinh co nghiem duy nhat: x = %.2f\n", x);
        }
    } else {
        // Truong hop phuong trinh bac hai
        delta = b * b - 4 * a * c;

        if (delta < 0) {
            printf("Phuong trinh vo nghiem.\n");
        } else if (delta == 0) {
            x = -b / (2 * a);
            printf("Phuong trinh co nghiem kep: x = %.2f\n", x);
        } else {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phuong trinh co 2 nghiem phan biet: x1 = %.2f, x2 = %.2f\n", x1, x2);
        }
    }
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