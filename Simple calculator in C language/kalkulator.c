#include <stdio.h>
#include <math.h>   // library untuk fungsi scientific

int main() {
    int pilihan;
    double angka1, angka2, hasil;
    int int1, int2;  // untuk operasi modulus
    char ulang;

    do {
        printf("\n===== Program Kalkulator Scientific =====\n");
        printf("Pilih operasi:\n");
        printf("1. Penjumlahan (+)\n");
        printf("2. Pengurangan (-)\n");
        printf("3. Perkalian (*)\n");
        printf("4. Pembagian (/)\n");
        printf("5. Modulus (%%)\n");
        printf("6. Pangkat (pow)\n");
        printf("7. Akar Kuadrat (sqrt)\n");
        printf("8. Logaritma Natural (log)\n");
        printf("9. Sinus (sin)\n");
        printf("0. Keluar\n");
        printf("Pilih opsi: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1: // Penjumlahan
                printf("Masukkan angka pertama: ");
                scanf("%lf", &angka1);
                printf("Masukkan angka kedua: ");
                scanf("%lf", &angka2);
                hasil = angka1 + angka2;
                printf("Hasil: %.2lf\n", hasil);
                break;

            case 2: // Pengurangan
                printf("Masukkan angka pertama: ");
                scanf("%lf", &angka1);
                printf("Masukkan angka kedua: ");
                scanf("%lf", &angka2);
                hasil = angka1 - angka2;
                printf("Hasil: %.2lf\n", hasil);
                break;

            case 3: // Perkalian
                printf("Masukkan angka pertama: ");
                scanf("%lf", &angka1);
                printf("Masukkan angka kedua: ");
                scanf("%lf", &angka2);
                hasil = angka1 * angka2;
                printf("Hasil: %.2lf\n", hasil);
                break;

            case 4: // Pembagian
                printf("Masukkan angka pertama: ");
                scanf("%lf", &angka1);
                printf("Masukkan angka kedua: ");
                scanf("%lf", &angka2);
                if (angka2 != 0) {
                    hasil = angka1 / angka2;
                    printf("Hasil: %.2lf\n", hasil);
                } else {
                    printf("Error: Pembagian dengan nol tidak diperbolehkan!\n");
                }
                break;

            case 5: // Modulus
                printf("Masukkan bilangan bulat pertama: ");
                scanf("%d", &int1);
                printf("Masukkan bilangan bulat kedua: ");
                scanf("%d", &int2);
                if (int2 != 0) {
                    printf("Hasil: %d\n", int1 % int2);
                } else {
                    printf("Error: Modulus dengan nol tidak diperbolehkan!\n");
                }
                break;

            case 6: // Pangkat
                printf("Masukkan basis: ");
                scanf("%lf", &angka1);
                printf("Masukkan pangkat: ");
                scanf("%lf", &angka2);
                hasil = pow(angka1, angka2);
                printf("Hasil: %.2lf\n", hasil);
                break;

            case 7: // Akar Kuadrat
                printf("Masukkan angka: ");
                scanf("%lf", &angka1);
                if (angka1 >= 0) {
                    hasil = sqrt(angka1);
                    printf("Hasil: %.2lf\n", hasil);
                } else {
                    printf("Error: Tidak bisa menghitung akar dari bilangan negatif!\n");
                }
                break;

            case 8: // Logaritma natural
                printf("Masukkan angka: ");
                scanf("%lf", &angka1);
                if (angka1 > 0) {
                    hasil = log(angka1);
                    printf("Hasil: %.4lf\n", hasil);
                } else {
                    printf("Error: Logaritma hanya untuk bilangan positif!\n");
                }
                break;

            case 9: // Sinus
                printf("Masukkan sudut (dalam radian): ");
                scanf("%lf", &angka1);
                hasil = sin(angka1);
                printf("Hasil: %.4lf\n", hasil);
                break;

            case 0:
                printf("Terima kasih telah menggunakan kalkulator!\n");
                return 0;

            default:
                printf("Pilihan tidak valid.\n");
        }

        printf("\nApakah ingin menghitung lagi? (y/n): ");
        scanf(" %c", &ulang);

    } while (ulang == 'y' || ulang == 'Y');

    printf("Program selesai. Sampai jumpa!\n");
    return 0;
}

