#include <stdio.h>
int main() {
    float chisoCu, chisoMoi; 
    

    printf("Nhap chi so cong to dien dau thang: ");
    scanf("%f", &chisoCu);

    printf("Nhap chi so cong to dien cuoi thang: ");
    scanf("%f", &chisoMoi);
	float soDien = chisoMoi - chisoCu;
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

