#include <stdio.h>

/*Definisi perulangan bersarang
Atau nested loop merupakan sebutan untuk sebuah perulangan di dalam perulangan, sehingga akan membentuk banyak perulangan yang harus diproses.

didalam NESTED LOOP terdapat istilah outer loop dan inner loop
outer loop yang ada di luar
sedangkan inner loop berada didalam

tidak ada batasan seberapa banyak kedalaman dari sebuah perulangan bersarang.

yang perlu diperhatikan adalah tentang ketelitian dalam penggunaan tanda kurung kurawal ({})
*/

/*studi kasus perulangan bersarang
 * membuat daftar perkalian 1 s/d 10
 * membuar matrix
 * membuat formasi 2 dimensi
 * menerapkan array 2 dimensi
 */

// studi kasus pertama penerapan membuat dafar angka
// contoh kesamping angka 1 - angka 5 kebawah angka 1 sebanyak 5 kali
/*
int main()
{
  int input;
  printf("inputkan angka : ");
  scanf("%d", &input);
  for (int i = 1; i <= input; i++)
  {
    for (int j = 1; j <= input; j++)
    {
      printf("%d ", j);
    }
    printf("\n");
  }
}
*/

// studi kasus kedua membuat daftar angka
// contoh kesamping angka 1 hingga 5 kali di ikuti dengan angka lainnya.
/*
int main()
{
  int input;
  printf("inputkan angka : ");
  scanf("%d", &input);

  for (int i = 1; i <= input; i++)
  {
    for (int j = 1; j <= input; j++)
      printf("%d ", i);
    {
      printf("\n");
    }
  }
}
*/

// studi kasus 3 membuat daftar angka
// contoh angka 1 - angka 5 ke samping dan kebawah tapi angka yang menyamping terjadi proses perkalian
/*
int main()
{
  int input;
  printf("Inputkan Angka : ");
  scanf("%d", &input);
  for (int i = 1; i <= input; i++)
  {
    for (int j = 1; j <= input; j++)
    {
      printf("%d\t", i * j);
    }
    printf("\n");
  }
}
*/

//studi kasus 4 membuat daftar perkalian 1-10