#include <stdio.h>
float tinhTienDien(float chisoCu, float chisoMoi) {
    float soDien = chisoMoi - chisoCu;

    if (soDien < 0) {
        printf("Ch? s? m?i không du?c nh? hon ch? s? cu.\n");
        return -1;  
    }

    float tienDien = 0;
    
    if (soDien <= 50) {
        tienDien = soDien * 1500;
    } else if (soDien <= 100) {
        tienDien = 50 * 1500 + (soDien - 50) * 2000;
    } else {
        tienDien = 50 * 1500 + 50 * 2000 + (soDien - 100) * 2500;
    }

    return tienDien;
}

int main() {
    float chisoCu, chisoMoi; 
    

    printf("Nhap chi so cong to dien dau thang: ");
    scanf("%f", &chisoCu);

    printf("Nhap chi so cong to dien cuoi thang: ");
    scanf("%f", &chisoMoi);
	float soDien = chisoMoi - chisoCu;

    if (soDien < 0) {
    printf("Chi so moi khong duoc nho hon chi so cu.\n");
   return -1;  
    }

    float tienDien = 0;
    
    if (soDien <= 50) {
    tienDien = soDien * 10000;
    } else if (50<= soDien <= 100) {
    tienDien = 50 * 10000 + (soDien - 50) * 15000;
    } else if (100<=soDien<=150) {
    tienDien = 50 * 10000 + 50 * 15000 + (soDien - 100) * 20000;
    } else if (150<=soDien<200) {
    tienDien = 50 * 10000 + 50 * 15000 + 50 * 20000 + (soDien - 150) * 25000;
	} else tienDien = 50 * 10000 + 50 * 15000 + 50 * 20000 + 50 * 25000 + (soDien-200) * 30000 ;



    if (tienDien >= 0) {
        printf("Tien dien phai tra trong thang la: %.2f VND\n", tienDien);
    }

    return 0;
}

