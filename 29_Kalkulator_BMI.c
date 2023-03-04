#include <stdio.h>

int main()
{
    float berat_badan, tinggi_badan, bmi;
    int umur;
    char jenis_kelamin;

    printf("Masukkan berat badan (kg): ");
    scanf("%f", &berat_badan);

    printf("Masukkan tinggi badan (m): ");
    scanf("%f", &tinggi_badan);

    printf("Masukkan umur: ");
    scanf("%d", &umur);

    printf("Masukkan jenis kelamin (p/d): ");
    scanf(" %c", &jenis_kelamin);

    bmi = berat_badan / (tinggi_badan * tinggi_badan);
    printf("BMI anda adalah: %.2f\n", bmi);

    if (umur >= 18)
    { // untuk dewasa
        if (jenis_kelamin == 'p')
        { // untuk wanita dewasa
            if (bmi < 18.5)
            {
                printf("Kurus\n");
            }
            else if (bmi >= 18.5 && bmi < 25)
            {
                printf("Ideal\n");
            }
            else if (bmi >= 25 && bmi < 30)
            {
                printf("Gemuk\n");
            }
            else
            {
                printf("Kegemukan\n");
            }
        }
        else if (jenis_kelamin == 'd')
        { // untuk pria dewasa
            if (bmi < 18.5)
            {
                printf("Kurus\n");
            }
            else if (bmi >= 18.5 && bmi < 25)
            {
                printf("Ideal\n");
            }
            else if (bmi >= 25 && bmi < 30)
            {
                printf("Gemuk\n");
            }
            else
            {
                printf("Kegemukan\n");
            }
        }
        else
        { // jika jenis kelamin tidak valid
            printf("Jenis kelamin yang dimasukkan tidak valid.\n");
        }
    }
    else
    { // untuk anak-anak
        if (jenis_kelamin == 'p')
        { // untuk anak perempuan
            if (umur >= 2 && umur <= 20)
            { // umur antara 2-20 tahun
                if (bmi < 5)
                {
                    printf("Sangat Kurus\n");
                }
                else if (bmi >= 5 && bmi < 85)
                {
                    printf("Normal\n");
                }
                else if (bmi >= 85 && bmi < 95)
                {
                    printf("Gemuk\n");
                }
                else
                {
                    printf("Sangat Gemuk\n");
                }
            }
            else
            { // jika umur tidak valid
                printf("Umur yang dimasukkan tidak valid.\n");
            }
        }
        else if (jenis_kelamin == 'd')
        { // untuk anak laki-laki
            if (umur >= 2 && umur <= 20)
            { // umur antara 2-20 tahun
                if (bmi < 5)
                {
                    printf("Sangat Kurus\n");
                }
                else if (bmi >= 5 && bmi < 85)
                {
                    printf("Normal\n");
                }
                else if (bmi >= 85 && bmi < 95)
                {
                    printf("Gemuk\n");
                }
                else
                {
                    printf("Sangat Gemuk\n");
                }
            }
            else
            { // jika umur tidak valid
                printf("Umur yang dimasukkan tidak valid.\n");
            }
        }
        else
        { // jika jenis kelamin tidak valid
            printf("Jenis kelamin yang dimasukkan tidak valid.\n");
        }
    }

    return 0;
}