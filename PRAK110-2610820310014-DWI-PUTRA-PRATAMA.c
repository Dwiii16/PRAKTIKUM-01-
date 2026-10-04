#include <stdio.h>

int main() {
    int alas = 5;
    int tinggi = 12;

    float sisi_A;
    float sisi_B;
    float sisi_C;
    float keliling;
    float luas;

    sisi_A = tinggi;
    sisi_C = alas;
    sisi_B = ((alas * alas) + (tinggi * tinggi));

    keliling = sisi_A + sisi_B + sisi_C;
    luas = (alas * tinggi) / 2.0;

    printf("Diketahui :\n\n");
    printf("Alas = %d cm\n", alas);
    printf("Tinggi = %d cm\n", tinggi);

    printf("\nJawab :\n\n");
    printf("Sisi A = %.0f cm\n", sisi_A);
    printf("Sisi B = %.0f cm\n", sisi_B);
    printf("Sisi C = %.0f cm\n", sisi_C);
    printf("Keliling = %.0f cm\n", keliling);
    printf("Luas = %.0f cm\n", luas);

    return 0;
}