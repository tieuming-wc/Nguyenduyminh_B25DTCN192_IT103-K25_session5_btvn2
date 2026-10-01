#include <stdio.h>

int main() {
    int tuoi_benh_nhan[4] = {75, -5, 25, 80};
    int co_bao_hiem[4]     = {1,   0,  2,  0};
    int phi_kham[4];

    int tong_doanh_thu = 0;
    int tong_uu_tien = 0;

    printf("=== MODULE TIEP NHAN & XEP HANG KHAM BENH ===\n\n");

    for (int i = 0; i < 4; i++) {
        if (co_bao_hiem[i] != 0 && co_bao_hiem[i] != 1) {
            co_bao_hiem[i] = 0;
        }

        if (tuoi_benh_nhan[i] <= 0 || tuoi_benh_nhan[i] > 120) {
            phi_kham[i] = 0;
            printf("Benh nhan %d: Tuoi = %d | BHYT = %d | Phi kham = %d VND | Luong: LOI DU LIEU\n", 
                   i + 1, tuoi_benh_nhan[i], co_bao_hiem[i], phi_kham[i]);
        } 
        else {
            if (co_bao_hiem[i] == 1) {
                phi_kham[i] = 40000;
            } else {
                phi_kham[i] = 200000;
            }

            if (tuoi_benh_nhan[i] > 70) {
                tong_uu_tien++;
                printf("Benh nhan %d: Tuoi = %d | BHYT = %d | Phi kham = %d VND | Luong: UU TIEN\n", 
                       i + 1, tuoi_benh_nhan[i], co_bao_hiem[i], phi_kham[i]);
            } else {
                printf("Benh nhan %d: Tuoi = %d | BHYT = %d | Phi kham = %d VND | Luong: THUONG\n", 
                       i + 1, tuoi_benh_nhan[i], co_bao_hiem[i], phi_kham[i]);
            }
        }

        tong_doanh_thu += phi_kham[i];
    }

    printf("\n=== TONG HOP CA TRUC ===\n");
    printf("Tong doanh thu thu phi kham thuc te: %d VND\n", tong_doanh_thu);
    printf("Tong so ca benh nhan thuoc luong UU TIEN: %d ca\n", tong_uu_tien);

    return 0;
}
