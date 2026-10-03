#include <stdio.h>

// Khai bao cac ham
void bai1();
void bai2();
void bai3();
void hienThiMenu();

int main()
{
    int luaChon;

    do
    {
        // Hien thi Menu
        hienThiMenu();

        printf(">> Xin moi chon chuc nang (1-4): ");
        scanf("%d", &luaChon);

        switch (luaChon)
        {
            case 1:
                bai1();
                break;

            case 2:
                bai2();
                break;

            case 3:
                bai3();
                break;

            case 4:
                printf("\nDa thoat chuong trinh!\n");
                break;

            default:
                printf("\nLua chon khong hop le! Vui long chon tu 1 den 4.\n");
        }

    } while (luaChon != 4);

    return 0;
}


// ================================
// Hien thi Menu
// ================================
void hienThiMenu()
{
    printf("\n");
    printf("+------------------------------------------+\n");
    printf("|           MENU CHUONG TRINH LAB 4       |\n");
    printf("+------------------------------------------+\n");
    printf("| 1. Tinh trung binh tong cac so chia het cho 2 |\n");
    printf("| 2. Kiem tra So nguyen to                 |\n");
    printf("| 3. Kiem tra So chinh phuong              |\n");
    printf("| 4. Thoat chuong trinh                    |\n");
    printf("+------------------------------------------+\n");
}


// ================================
// Bai 1
// Tinh trung binh cong cac so chia het cho 2
// ================================
void bai1()
{
    int n;
    int i;
    int so;
    int tong = 0;
    int dem = 0;
    float trungBinh;

    printf("\n========== BAI 1 ==========\n");

    printf("Nhap so luong phan tu n: ");
    scanf("%d", &n);

    // Kiem tra n
    if (n <= 0)
    {
        printf("So luong phan tu phai lon hon 0!\n");
        return;
    }

    // Nhap cac so
    for (i = 1; i <= n; i++)
    {
        printf("Nhap so thu %d: ", i);
        scanf("%d", &so);

        // Kiem tra so chia het cho 2
        if (so % 2 == 0)
        {
            tong = tong + so;
            dem++;
        }
    }

    // Neu co so chia het cho 2
    if (dem > 0)
    {
        trungBinh = (float)tong / dem;

        printf("\nTong cac so chia het cho 2 = %d", tong);
        printf("\nSo luong cac so chia het cho 2 = %d", dem);
        printf("\nTrung binh cong cac so chia het cho 2 = %.2f\n", trungBinh);
    }
    else
    {
        printf("\nKhong co so nao chia het cho 2!\n");
    }
}


// ================================
// Bai 2
// Kiem tra so nguyen to
// ================================
void bai2()
{
    int n;
    int i;
    int laNguyenTo = 1;

    printf("\n========== BAI 2 ==========\n");

    printf("Nhap n: ");
    scanf("%d", &n);

    if (n < 2)
    {
        laNguyenTo = 0;
    }
    else
    {
        for (i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                laNguyenTo = 0;
                break;
            }
        }
    }

    if (laNguyenTo == 1)
    {
        printf("%d la so nguyen to.\n", n);
    }
    else
    {
        printf("%d khong phai la so nguyen to.\n", n);
    }
}


// ================================
// Bai 3
// Kiem tra so chinh phuong
// ================================
void bai3()
{
    int n;
    int i;
    int laChinhPhuong = 0;

    printf("\n========== BAI 3 ==========\n");

    printf("Nhap n: ");
    scanf("%d", &n);

    if (n >= 0)
    {
        for (i = 0; i * i <= n; i++)
        {
            if (i * i == n)
            {
                laChinhPhuong = 1;
                break;
            }
        }
    }

    if (laChinhPhuong == 1)
    {
        printf("%d la so chinh phuong.\n", n);
    }
    else
    {
        printf("%d khong phai la so chinh phuong.\n", n);
    }
}