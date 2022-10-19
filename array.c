#include <stdio.h>

// konsep dasar pembuatan variable
// ketika ingin menyimpan data kita memperlukan variable
// contoh integer a untuk menyimpan angka 10
// jika ada data lagi kita masukkan dalam integer b dan seterusnya
// namun jika membutuhkan 100 penyimpanan data apakah kita harus membuat 100 variable?

// definisi array
// array adalah sebuah variable yang dapat menyimpan data dengan catatan tipe datanya sama, kita dapat menyimpan 100 data hanya dengan satu variable.

// misal kan 1 angkatan mahasiswa memiliki 150 orang yang akan di ambil adalah nama
// dan kita membutuhkan 150 variable, disinilah kita membutuhkan variable array untuk mendeklarasi banyaknya variable.

// karena banyaknya data disimpan dalam variable yang sama, tentu harus ada pembeda, yaitu terdapat index dari setiap data yang disimpan.

// kita gak bisa membuat variable yang sama, di array pun sama kita harus membuat identitas dari tiap variable array, yaitu index, nilai index bisa dimulai dari 0, misal kita memiliki 5 data maka nilai index nya adalah index 0,1,2,3, dan 4 dst.

// index array
// array  |10|  |20|  |30|  |40|  |50|  |60|  |70|
// misalkan kita memiliki variable array ada 10 20 sampai 70 data, di setiap data kita harus memiliki pembeda yaitu index, dan indexnya di mulai dari 0 hingga index pada data terakhir

// mendeklarasi array
/*
* membuat array kosong
int nama_array[10];
* membuat array dengan data
int nama_array[5] = {4,5,8,19,20}; //setiap data index itu dipisahkan dengan koma(,)
*/

// penerapan array kosong
/*
int main()
{
  int array[5];
  for (int inputan = 0; inputan < 5; inputan++)
  {
    printf("Inputkan angka ke-%d : ", inputan);
    scanf("%d", &array[inputan]);
  }
  printf("\ndata array yang sudah diinputkan adalah\n");
  for (int i = 0; i < 5; i++)
  {
    printf("%d\n", array[i]);
  }
}
*/

// penerapan array dengan data
int main()
{
  int array[5] = {8, 9, 5, 10, 12};
  printf("\nData array yang sudah disimpan adalah\n");
  for (int i = 0; i < 5; i++)
  {
    printf("%d\n", array[i]);
  }
}