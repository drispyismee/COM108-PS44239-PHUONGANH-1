#include <stdio.h>
#include <math.h>

int main() {
    int chon;
    
    do {
        // Hien Thi Menu Chuong Trinh
        printf("\n=================== MENU CHUC NANG ===================\n");
        printf("1. Kiem tra so (nguyen, nguyen to, chinh phuong)\n");
        printf("2. Tim UCLN va BCNN cua 2 so\n");
        printf("3. Tinh tien quan Karaoke\n");
        printf("4. Tinh tien dien\n");
        printf("5. Doi tien cac menh gia\n");
        printf("6. Tinh lai suat vay ngan hang (12 thang)\n");
        printf("7. Tinh vay tien mua xe\n");
        printf("8. Sap xep diem 2 sinh vien\n");
        printf("9. Game doan so\n");
        printf("10. Tinh toan 2 phan so\n");
        printf("0. Thoat chuong trinh\n");
        printf("======================================================\n");
        printf("Nhap lua chon cua ban (0-10): ");
        scanf("%d", &chon);

        // Switch Case su dung tinh nang 
        switch (chon) {
            case 1: {
                int x;
                printf("Nhap vao 1 so nguyen x: ");
                scanf("%d", &x);
                printf("- Day la so nguyen.\n");
                
                int dem = 0;
                for (int i = 1; i <= x; i++) {
                    if (x % i == 0) dem++;
                }
                if (dem == 2) printf("- Day la so nguyen to.\n");
                else printf("- Day khong phai so nguyen to.\n");
                
                int can = sqrt(x);
                if (can * can == x) printf("- Day la so chinh phuong.\n");
                else printf("- Day khong phai so chinh phuong.\n");
                break;
            }

            case 2: {
                int a, b;
                printf("Nhap 2 so nguyen a va b: ");
                scanf("%d %d", &a, &b);
                int gocA = a, gocB = b;
                
                while (b != 0) {
                    int du = a % b;
                    a = b;
                    b = du;
                }
                printf("Uoc chung lon nhat (UCLN) = %d\n", a);
                printf("Boi chung nho nhat (BCNN) = %d\n", (gocA * gocB) / a);
                break;
            }

            case 3: {
                int gioBD, gioKT;
                printf("Nhap gio bat dau va ket thuc (12-23): ");
                scanf("%d %d", &gioBD, &gioKT);
                
                int soGio = gioKT - gioBD;
                long tien = 0;
                if (soGio <= 3) {
                    tien = soGio * 150000;
                } else {
                    tien = 3 * 150000 + (soGio - 3) * 150000 * 0.7;
                }
                if (gioBD >= 14 && gioBD <= 17) {
                    tien = tien * 0.9; // Giảm thêm 10%
                }
                printf("Tong tien karaoke phai tra: %ld VND\n", tien);
                break;
            }

            case 4: {
                int kwh;
                long tienDien = 0;
                printf("Nhap so kWh dien su dung: ");
                scanf("%d", &kwh);
                
                if (kwh <= 50) {
                    tienDien = kwh * 1678;
                } else if (kwh <= 100) {
                    tienDien = 50 * 1678 + (kwh - 50) * 1734;
                } else {
                    tienDien = 50 * 1678 + 50 * 1734 + (kwh - 100) * 2014;
                }
                printf("So tien dien phai tra: %ld VND\n", tienDien);
                break;
            }

            case 5: {
                int tien;
                printf("Nhap so tien can doi: ");
                scanf("%d", &tien);
                
                printf("Ket qua quy doi:\n");
                printf("- To 500: %d\n", tien / 500); tien %= 500;
                printf("- To 200: %d\n", tien / 200); tien %= 200;
                printf("- To 100: %d\n", tien / 100); tien %= 100;
                printf("- To 50: %d\n", tien / 50);   tien %= 50;
                break;
            }

            case 6: {
                double vay;
                printf("Nhap so tien muon vay: ");
                scanf("%lf", &vay);
                double gocThang = vay / 12;
                double conLai = vay;
                
                printf("\nKy han | Lai phai tra | Goc phai tra | Tong tra | Con lai\n");
                for (int i = 1; i <= 12; i++) {
                    double lai = conLai * 0.05;
                    double tong = lai + gocThang;
                    conLai -= gocThang;
                    printf("  %d    |   %.0f   |   %.0f   |  %.0f  | %.0f\n", i, lai, gocThang, tong, conLai);
                }
                break;
            }

            case 7: {
                double phanTram;
                printf("Nhap phan tram vay (vd: 80): ");
                scanf("%lf", &phanTram);
                
                double giaXe = 500000000;
                double tienVay = giaXe * (phanTram / 100);
                double traTruoc = giaXe - tienVay;
                
                printf("So tien tra lan dau: %.0f VND\n", traTruoc);
                printf("So tien vay ngan hang: %.0f VND\n", tienVay);
                break;
            }

            case 8: {
                char ten1[30], ten2[30];
                float d1, d2;
                printf("Nhap ten va diem sinh vien 1: "); scanf("%s %f", ten1, &d1);
                printf("Nhap ten va diem sinh vien 2: "); scanf("%s %f", ten2, &d2);
                
                printf("\n--- DANH SACH SAP XEP GIAM DAN ---\n");
                if (d1 >= d2) {
                    printf("1. %s - Diem: %.1f\n", ten1, d1);
                    printf("2. %s - Diem: %.1f\n", ten2, d2);
                } else {
                    printf("1. %s - Diem: %.1f\n", ten2, d2);
                    printf("2. %s - Diem: %.1f\n", ten1, d1);
                }
                break;
            }

            case 9: {
                int so1 = 3, so2 = 11; // Số định sẵn cho gọn
                int doan1, doan2;
                printf("Nhap 2 so du doan (tu 1 den 15): ");
                scanf("%d %d", &doan1, &doan2);
                
                int trung = 0;
                if (doan1 == so1 || doan1 == so2) trung++;
                if (doan2 == so1 || doan2 == so2) trung++;
                
                printf("Ket qua he thong la: %d va %d\n", so1, so2);
                if (trung == 0) printf("Chuc ban may mắn lan sau!\n");
                else if (trung == 1) printf("Chuc mung ban trung giai nhi!\n");
                else printf("Chuc mung ban trung giai nhat!\n");
                break;
            }

            case 10: {
                int t1, m1, t2, m2;
                printf("Nhap phan so 1 (tu va mau): "); scanf("%d %d", &t1, &m1);
                printf("Nhap phan so 2 (tu va mau): "); scanf("%d %d", &t2, &m2);
                
                printf("Tong = %d/%d\n", (t1 * m2 + t2 * m1), (m1 * m2));
                printf("Hieu = %d/%d\n", (t1 * m2 - t2 * m1), (m1 * m2));
                printf("Tich = %d/%d\n", (t1 * t2), (m1 * m2));
                printf("Thuong = %d/%d\n", (t1 * m2), (m1 * t2));
                break;
            }

            case 0:
                printf("Thoat chuong trinh. Tam biet ban!\n");
                break;

            default:
                printf("Lua chon khong hop le! Vui long chon tu 0 den 10.\n");
        }
        
    } while (chon != 0);

    return 0;
}