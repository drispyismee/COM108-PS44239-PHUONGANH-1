#include <stdio.h>

void tinhTrungBinhChan() {
    int min, max;
    int tong = 0;
    int bienDem = 0;
    int i;
    float trungBinh;

    printf("Nhap min: ");
    scanf("%d", &min);
    printf("Nhap max: ");
    scanf("%d", &max);

    if (min > max) {
        printf("Khong co so nao chia het cho 2 trong khoang da nhap!\n");
        return;
    }

    for (i = min; i <= max; i++) {
        if (i % 2 == 0) {
            tong = tong + i;
            bienDem = bienDem + 1;
        }
    }

    if (bienDem == 0) {
        printf("Khong co so nao chia het cho 2 trong khoang da nhap!\n");
    } else {
        trungBinh = (float)tong / bienDem;
        printf("Tong cac so chia het cho 2: %d\n", tong);
        printf("So luong cac so chia het cho 2: %d\n", bienDem);
        printf("Trung binh cong: %.2f\n", trungBinh);
    }
}

int main() {
    int chon;

    do {
        printf("\n========== MENU ==========\n");
        printf("1. Tinh trung binh cong cac so chia het cho 2\n");
        printf("2. Chuc nang 2\n");
        printf("3. Chuc nang 3\n");
        printf("4. Thoat\n");
        printf("==========================\n");
        printf("Nhap lua chon: ");
        scanf("%d", &chon);

        switch (chon) {
            case 1:
                tinhTrungBinhChan();
                break;
            case 2:
                printf("Chuc nang 2 dang phat trien...\n");
                break;
            case 3:
                printf("Chuc nang 3 dang phat trien...\n");
                break;
            case 4:
                printf("Thoat chuong trinh!\n");
                break;
            default:
                printf("Lua chon khong hop le! Vui long nhap tu 1 den 4.\n");
                break;
        }
    } while (chon != 4);

    return 0;
}


//bai3
#include <stdio.h>

void tinhTrungBinhChan() {
    int min, max;
    int tong = 0;
    int bienDem = 0;
    int i;
    float trungBinh;

    printf("Nhap min: ");
    scanf("%d", &min);
    printf("Nhap max: ");
    scanf("%d", &max);

    if (min > max) {
        printf("Khong co so nao chia het cho 2 trong khoang da nhap!\n");
        return;
    }

    for (i = min; i <= max; i++) {
        if (i % 2 == 0) {
            tong = tong + i;
            bienDem = bienDem + 1;
        }
    }

    if (bienDem == 0) {
        printf("Khong co so nao chia het cho 2 trong khoang da nhap!\n");
    } else {
        trungBinh = (float)tong / bienDem;
        printf("Tong cac so chia het cho 2: %d\n", tong);
        printf("So luong cac so chia het cho 2: %d\n", bienDem);
        printf("Trung binh cong: %.2f\n", trungBinh);
    }
}

void kiemTraNguyenTo() {
    int x, i;
    int laNguyenTo = 1;

    printf("Nhap so nguyen x: ");
    scanf("%d", &x);

    if (x < 2) {
        laNguyenTo = 0;
    } else {
        for (i = 2; i < x; i++) {
            if (x % i == 0) {
                laNguyenTo = 0;
                break;
            }
        }
    }

    if (laNguyenTo == 1) {
        printf("%d la so nguyen to.\n", x);
    } else {
        printf("%d khong phai la so nguyen to.\n", x);
    }
}

int main() {
    int chon;

    do {
        printf("\n========== MENU ==========\n");
        printf("1. Tinh trung binh cong cac so chia het cho 2\n");
        printf("2. Kiem tra so nguyen to\n");
        printf("3. Chuc nang 3\n");
        printf("4. Thoat\n");
        printf("==========================\n");
        printf("Nhap lua chon: ");
        scanf("%d", &chon);

        switch (chon) {
            case 1:
                tinhTrungBinhChan();
                break;
            case 2:
                kiemTraNguyenTo();
                break;
            case 3:
                printf("Chuc nang 3 dang phat trien...\n");
                break;
            case 4:
                printf("Thoat chuong trinh!\n");
                break;
            default:
                printf("Lua chon khong hop le! Vui long nhap tu 1 den 4.\n");
                break;
        }
    } while (chon != 4);

    return 0;
}