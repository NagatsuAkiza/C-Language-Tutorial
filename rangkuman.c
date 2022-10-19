#include <stdio.h>

#define JUDUL "Gue Keren Banget"
#define BILANGAN 100

void main()
{
    int angka = 10;
    char huruf = 'A';
    float pecahan = 4.5;

    printf("Konstanta JUDUL adalah %s\n", JUDUL);
    printf("Konstanta BILANGAN adalah %i\n", BILANGAN);

    printf("variable angka = %d\n", angka);
    printf("variable hurug = %c\n", huruf);
    printf("variable pecahan =%.2f\n", pecahan);

    /*  fungsi nilai data
        fungsi void tidak mengembalikan nilai

        fungsi int mengembalikan nilai (return)

        fungsi char hanya untuk sebuah karakter jika di pakai di dalam sebuah program saat ingin memanggil data tidak perlu lagi menggunakan (&) untuk memanggil sebuah variable.
    */

    /* fungsi dari puts
        puts("Ini adalah fungsi puts()");
        putchar('A');
        puts("");
        */

    /* penggunaan format %
        %c hanya untuk char (huruf/karakter).
        %s untuk data string (constanta).
        %i,%d untuk menampilkan bilangan bulat (angka/integer).
        %f,%e untuk menampilkan data bilangan desimal.
        %o untuk menampilkan bilangan octal.
        %x untuk menampilkan bilangan hexadesimal.
        %u untuk data bilangan unsigned.
        fungsi (&) digunakan untuk mengambil sebuah variable
        \n (backslash n) digunakan untuk memberi enter 1 kali pada suatu program.
        \t (backslash t)
        digunakan untuk memberi tab 1 kali pada suatu program
        [^(fungsi)] digunakan untuk mengindentifikasi kan suatu fungsi.
    */

    /* fungsi input data
    scanf()
    digunakan untuk menginputkan data berupa data numerik, karakter, dan string.

    gets()
    digunakan untuk menginputkan data bertipe karakter dan string.

    getchar()
    digunakan untuk menginputkan data bertipe karakter.

    getch()
    digunakan untuk membaca data karakter. Ketika input menggunakan fungsi ini, karakter tidak akan ditampilkan dilayar sehingga sering digunakan untuk meminta inputan password.

    getche()
    digunakan untuk membaca data karakter, tetapi bedanya dengan getch, karakter yang diketikkan di tampilkan dilayar.
   */
}
