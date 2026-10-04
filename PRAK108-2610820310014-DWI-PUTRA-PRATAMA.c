#include <stdio.h>

int main() {
    float putaran = 5;
    float jarak = 14;
    float pi = 3.14159265359;
    float keliling, jari_jari;

    keliling = jarak / putaran;
    jari_jari = keliling / (2 * pi);

    printf("Diketahui:\n\n");
    printf("Pak Dengklek mengelilingi taman = %.0f Putaran\n", putaran);
    printf("Jarak tempuh Pak Dengklek = %.0f Kilometer\n", jarak);

    printf("\n\nJawaban:\n\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", jari_jari);

    return 0;
}