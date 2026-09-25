#include <stdio.h>
#define PI 3.14159
int main() {
    ///hinh chu nhat
    int chieu_dai_hinh_chu_nhat, chieu_rong_hinh_chu_nhat, chu_vi_hinh_chu_nhat, dien_tich_hinh_chu_nhat;
    printf("Nhap chieu dai hinh chu nhat: ");
    scanf("%d", &chieu_dai_hinh_chu_nhat);
    printf("Nhap chieu rong hinh chu nhat: ");
    scanf("%d", &chieu_rong_hinh_chu_nhat);
    chu_vi_hinh_chu_nhat = 2*(chieu_dai_hinh_chu_nhat + chieu_rong_hinh_chu_nhat);
    dien_tich_hinh_chu_nhat = chieu_dai_hinh_chu_nhat * chieu_rong_hinh_chu_nhat;
    printf("chu vi hinh chu nhat: %d\n", chu_vi_hinh_chu_nhat);
    printf("dien tich hinh chu nhat: %d\n", dien_tich_hinh_chu_nhat);

    ///hinh tron
    float ban_kinh_hinh_tron, chu_vi_hinh_tron, dien_tich_hinh_tron;
    printf("Nhap ban kinh hinh tron: ");
    scanf("%f", &ban_kinh_hinh_tron);
    chu_vi_hinh_tron = 2*PI*ban_kinh_hinh_tron;
    dien_tich_hinh_tron = PI*ban_kinh_hinh_tron*ban_kinh_hinh_tron;
    printf("chu vi hinh tron: %.2f\n", chu_vi_hinh_tron);
    printf("dien tich hinh tron: %.2f\n", dien_tich_hinh_tron);

    return 0;
}