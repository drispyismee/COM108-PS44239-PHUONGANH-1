#include <stdio.h>

// Khai bao ham
void hienThiMenu();
void chucNang1();
void kiemTraSoNguyenTo();

int main()
{
    int luaChon;

    do
    {
        hienThiMenu();

        printf(">> Xin moi chon chuc nang (1-4): ");
        scanf("%d", &luaChon);

        switch (luaChon)
        {
            case 1:
                chucNang1();
                break;

            case 2:
                kiemTraSoNguyenTo();
                break;

            case 3:
                printf("\nChuc nang 3 chua thuc hien.\n");
                break;

            case 4:
                printf("\nThoat chuong trinh.\n");
                break;

            default:
                printf("\nLua chon khong hop le!\n");
                break;
        }

    } while (luaChon != 4);

    return 0;
}


// =============================
// HIEN THI MENU
// =============================
void hienThiMenu()
{
    printf("\n");
    printf("+------------------------------------------+\n");
    printf("|          MENU CHUONG TRINH LAB 4         |\n");
    printf("+------------------------------------------+\n");
    printf("| 1. Tinh trung binh cac so chia het cho 2|\n");
    printf("| 2. Kiem tra So nguyen to                 |\n");
    printf("| 3. Kiem tra So chinh phuong              |\n");
    printf("| 4. Thoat chuong trinh                    |\n");
    printf("+------------------------------------------+\n");
}


// =============================
// CHUC NANG 1
// TINH TRUNG BINH CAC SO CHIA HET CHO 2
// =============================
void chucNang1()
{
    int min, max;
    int i;
    int tong = 0;
    int dem = 0;
    float trungBinh;

    printf("\nNhap min: ");
    scanf("%d", &min);

    printf("Nhap max: ");
    scanf("%d", &max);

    if (min > max)
    {
        printf("Khong co so nao chia het cho 2 trong khoang da nhap!\n");
        return;
    }

    for (i = min; i <= max; i++)
    {
        if (i % 2 == 0)
        {
            tong += i;
            dem++;
        }
    }

    if (dem == 0)
    {
        printf("Khong co so nao chia het cho 2 trong khoang da nhap!\n");
    }
    else
    {
        trungBinh = (float)tong / dem;

        printf("Tong cac so chia het cho 2: %d\n", tong);
        printf("So luong cac so chia het cho 2: %d\n", dem);
        printf("Trung binh cong: %.2f\n", trungBinh);
    }
}


// =============================
// CHUC NANG 2
// KIEM TRA SO NGUYEN TO
// =============================
void kiemTraSoNguyenTo()
{
    int x;
    int i;
    int laSoNguyenTo = 1;

    printf("\nNhap x: ");
    scanf("%d", &x);

    // Neu x < 2 thi khong phai so nguyen to
    if (x < 2)
    {
        laSoNguyenTo = 0;
    }
    else
    {
        // Kiem tra cac uoc tu 2 den x - 1
        for (i = 2; i < x; i++)
        {
            if (x % i == 0)
            {
                laSoNguyenTo = 0;
                break;
            }
        }
    }

    if (laSoNguyenTo == 1)
    {
        printf("[%d] la so nguyen to.\n", x);
    }
    else
    {
        printf("[%d] khong phai la so nguyen to.\n", x);
    }
}