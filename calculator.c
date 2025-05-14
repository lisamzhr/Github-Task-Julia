#include<stdio.h>

int main(){
    //deklarasi variabel
    float a, b, result;
    char symbol, sign = 'a';
    printf("Selamat datang di kalkulator Julia");
    printf("\nKalkulator ini dapat mengkalkulasikan perhitungan yang diinginkan");
    printf("\nAturan yang dapat dilakukan: ");
    printf("\n1. Jika penjumlahan (+) ");
    printf("\n2. Jika pengurangan (-) ");
    printf("\n3. Jika perkalian (*) ");
    printf("\n4. Jika pembagian (/) ");
    printf("Contoh Input: 4 * 5 ");
     //buat loop kalkulator

    do
    {
        printf("\nMasukkan Persamaan: ");
        scanf("%f %c %f", &a, &symbol, &b);
        //ini dibuat functiomn jg bole, pokoknya diubah kodenya
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
                }
                //nikinin else sm ui knp gabole
                break;
            default:
                //buat printf unknown atau invalid symbol
                break;
        }
        //rapihin printfnya biar ui nya bagus
        printf("%.2f\n", result);
        //buatin printf lainjut atau ga
        scanf(" %c", &sign);
    } while (sign == 'Y' || sign == 'y');
    return 0;
}