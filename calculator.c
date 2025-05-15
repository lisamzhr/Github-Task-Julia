#include<stdio.h>

int main(){
    // deklarasi variabel
    float a, b, result;
    char symbol, sign = 'a';
    int valid = 0;

    // UI pembuka
    printf("Selamat datang di Kalkulator Julia\n");
    printf("Kalkulator ini dapat mengkalkulasikan perhitungan yang diinginkan\n");
    printf("Aturan yang dapat dilakukan:\n");
    printf("1. Jika penjumlahan (+)\n");
    printf("2. Jika pengurangan (-)\n");
    printf("3. Jika perkalian (*)\n");
    printf("4. Jika pembagian (/)\n");
    printf("Contoh Input: 4 * 5\n");

    // buat loop kalkulator
    do {
        printf("\nMasukkan Persamaan: ");
        scanf("%f %c %f", &a, &symbol, &b);
        valid = 1;

        // proses perhitungan
        switch (symbol){
            case '+':
                result = a + b;
                break;
            case '-':
                result = a - b;
                break;
            case '*':
                result = a * b;
                break;
            case '/':
                if (b != 0){
                    result = a / b;
                } else {
                	valid = 0;
                    printf("Error: Tidak bisa membagi dengan nol!\n");
                    continue;
                }
                break;
            default:
            	valid = 0;
                printf("Error: Simbol '%c' tidak dikenal. Gunakan +, -, *, atau /.\n", symbol);
                continue;
        }

        // tampilkan hasil
        if (valid == 1){
    	    printf("Hasil: %.2f %c %.2f = %.2f\n", a, symbol, b, result);}

        // tanya lanjut atau tidak
        printf("Apakah Anda ingin menghitung lagi? (Y/N): ");
        scanf(" %c", &sign);

    } while (sign == 'Y' || sign == 'y');

    printf("Terima kasih telah menggunakan Kalkulator Julia!\n");
    return 0;
}

