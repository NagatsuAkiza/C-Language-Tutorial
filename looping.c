#include <stdio.h>

/*Definisi Perulangan
struktur program yang akan mengulangi statement atau perintah lebih dari satu selama kondisi bernilai benar, dan akan berhenti ketika kondisi bernilai salah.
*/

/*3 cara perulangan
for, while, dan do-while

for
digunakan untuk mengeksekusi program jika sudah diketahui nilai awal dan batas akhir dari perulangan.

Format penulisan kodenya:
for (nilaiAwal; kondisiBatas; counter){
  statement1;
  statement2;
  ... ... ...;
}

nilaiAwal : perulangan dimulai dari berapa?
Misalnya i = 1
kondisiBatas : batas akhir perulangan pada kondisi apa?
Misalnya i <= 100
counter : berisi increment atau decrement
Misalnya i++ atau i--

studi kasus perulangan for
* menampilkan angka 1 sampai sekian
* menampilkan bilangan genap dan ganjil dari 1 sampai sekian
* menghitung faktorial
* menghitung total dan rata-rata dari sejumlah data
*/

// penerapan perulangan for
/*int main()
{
  for (int i = 10; i >= 1; i--) //jika menggunakan increment (++) menggunakan >= jika menggunakan dicrement (--) menggunakan <=
  {
    printf("%d ", i);
  }
}

int main()
{
  for (char i = 'A'; i <= 'Z'; i++)
  {
    printf("%c ", i);
  }
}
*/

/*perulangan while
* statement pada perulangan while akan dieksekusi jika memenuhi kondisi yang sesuai.
* termasuk jenis uncounted loop(perulangan yang tidak memerlukan counter)
* perulangan while ini kondisional, tidak memerlukan nilai awal dan counter
* meskipun juga bisa di jadikan counted loop

format penulisan kodenya :

jika dijadikan counted loop
nilaiAwal;
while(kondisiBatas){
  statement1;
  statement2;
  ... ... ...;
  counter;
}

jika tidak menggunakan counted loop
while(kondisiBatas){
  statement1;
  statement2;
  ... ... ...;
}
*/

/*perulangan do-while
 * sifatnya sama seperti perulangan while
 * tetapi pada perulangan do-while statement minimal akan dieksekusi sekali, baru kemudian dilakukan pengecekan kondisi.

format penulisan kodenya :

nilaiAwal;
do{
  statement2;
  statement3;
  ... ... ...;
  counter;
}while(kondisiBatas);
*/

/*studi kasus perulangan while / do-while
 * mengulang menu USSD di operator selular, seperti pada *363#
 * melakukan perulangan berdasarkan pilihan user
 *menampilkan sejumlah data yang kita tidak tau berapa total datanya.
 */

// penerapan perulangan while
/*
int main()
{
  int i = 1;
  while (i <= 10)
  {
    printf("%d ", i);
    i++;
  }
}
*/

// penerapan perulangan do-while
/*
int main()
{
  int i = 11;
  do
  {
    printf("%d ", i);
    i++;
  } while (i <= 10);
}
*/

// penerapan perulangan while / do-while pada kasus kondisional

/*While
void main()
{
  char input = 'y';
  while (input == 'y')
  {
    printf("apakah anda ingin mengulang proses? (y/t): ");
    scanf(" %c", &input);
  }
  printf("\n\nPerulangan telah berhenti! Terima kasih");
}
*/

/*do-while
void main()
{
  char input = 'y';
  do
  {
    printf("Apakah anda ingin mengulang proses? (y/t) : ");
    scanf(" %c", &input);
  } while (input == 'y');
  printf("\n\nPerulangan telah berhenti! Terima kasih");
}
*/

/*Perintah break
break adalah perintah yang dipakai untuk memaksa sebuah perulangan berhenti sebelum waktunya.
*/

// penerapan break pada perulangan
/*
void main()
{
  for (int i = 1; i <= 100; i++)
  {
    if (i == 10)
    {
      break;
    }
    printf("%d ", i);
  }
}
*/

/*Perintah continue
continue adalah perintah yang dipakai untuk skip atau melewati perulangan yang sedang berjalan agar melanjutkan ke perulangan berikutnya.

sifat dari continue dia akan mengskip atau melewati statement yang ada di bawahnya

kecuali continue di letakkan di bawah printf
*/

// penerapan continue pada perulangan
void main()
{
  int hitung = 1;
  for (int i = 1; i <= 10; i++)
  {
    if (i == 7)
    {
      continue;
    }
    printf("%d ", i);
  }
}