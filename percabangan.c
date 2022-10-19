#include <stdio.h>

/* Percabangan
Apa itu percabangan?
istilah percabangan sebenarnya untuk menggambarkan alur program yang bercabang.
Bercabang karena ada kondisi pilihan
jika... maka...

Fungsi dari percabangan ini untuk menentukan kondisi pilihan.
Dengan adanya percabangan akan mampu membuat program berpikir dan menentukan tindakan sesuai dengan logika/kondisi
*/

/*Contoh kasus 1
Login pada website

Username & Password sesuai? jika benar masuk ke dalam dashboard/halaman utama web,
jika tidak kembali ke halaman login.
*/

/*Contoh kasus 2
Menentukan nilai angka
Menjadi huruf
A/B/C...

Jika nilainya 81-100 maka nilai A (jika kondisi benar), jika nilainya 71-80 maka nilai B (jika kondisi benar)/kondisi salah, dst.
*/

/*Contoh kasus 3
Menentukan diskon belanja
pada jumlah belanja tertentu.

Total belanja Rp.100.000 -> jika benar "selamat anda mendapat diskon 10%"

jika salah terima kasih sudah berbelanja.
*/

/*Contoh kasus ...
- menentukan bilangan ganjil dan genap
- membuat menu program
- mengkonversi satuan berat / panjang / suhu
- mengkonversi angka bulan menjsadi nama bulan
- mencari nilai minimal dan maksimal.
*/

/*Bentuk percabagan
- Percabangan If Else
- Percabangan Switch Case

Percabangan IF... ELSE...

- IF (yang berdiri sendiri)
if(boolean_expression) {
  statement;
}
percabangan if yang beridiri sendiri hanya memungkinkan output jika bernilai benar jika salah maka kebentuk kedua.

- IF ELSE
if(boolean_expression){
  statement true;
}else{
  statement false;
}
jika benar outputnya di statement true jika salah outputnya berada di statement false.

- IF ELSE IF
if(boolean_expression){
  statement true 1;
}else if(boolean_expression){
  statement true 2;
}else{
  stetement false;
}
memungkinkan adanya beberapa percabangan (percabangan yang lebih dari 1)
jika statement true yang pertama salah, maka akan di lakukan pengecekan lagi di else if statement true 2, jika salah akan di masukkan ke statement false.

bentuk yang ketiga lebih cocok untuk penerapan pada kasus penentuan nilai angka menjadi nilai huruf
*/

/*Percabangan bersarang IF ELSE (nested if)
formatnya seperti ini
if(boolean_expression){
  statement;
  if(boolean_expression){
    statement;
  }else{
    statement;
  }
}else{
  statement;
}

didalam if terdapat if, ini memungkinkan kita membuat sebuah percabangan, jika benar kita membuat percabangan lagi ini sangat memungkinkan.
*/

// Contoh penerapan if else untuk menentukan nilai huruf
/*void main()
{
  int nilai;

  printf("inputkan nilai : ");
  scanf("%d", &nilai);

  if (nilai >= 81 && nilai <= 100)
  {
    printf("\nNilai A");
  }
  else if (nilai >= 71 && nilai <= 80)
  {
    printf("\nNilai B");
  }
  else if (nilai >= 61 && nilai <= 70)
  {
    printf("\nNilai C");
  }
  else
  {
    printf("\nAnda tidak lulus");
  }
}
*/

// penerapan if nested dalam seleksi pegawai
/*
void main()
{
  // studi kasus seleksi pegawai, dengan syarat;
  // laki laki tinggi minimal 160
  // perempuan tinggi minimal 155

  char jeniskelamin;
  int tinggi;

  printf("Masukkan jenis kelamin : ");
  scanf("%c", &jeniskelamin);
  printf("\nMasukkan tinggi badan : ");
  scanf("%d", &tinggi);

  if (jeniskelamin == 'L')
  {
    if (tinggi >= 160)
    {
      printf("Selamat Anda Lolos Seleksi");
    }
    else
    {
      printf("Mohon maaf anda tidak lolos");
    }
  }
  else if (jeniskelamin == 'P')
  {
    if (tinggi >= 155)
    {
      printf("Selamat Anda Lolos Seleksi");
    }
  }
  else
  {
    printf("Maaf anda tidak lolos");
  }
}
*/

/*Format nya seperti ini
switch(variable){
  case value:
      statement;
      break;
  case value:
      statement;
      break;
  default:
      statement false;
}

value adalah data dari variable, jika bernilai benar statementnya ditulis di bawahnya.
break digunakan untuk menghentikan sebuah case
lalu dilanjutkan opsi ke case berikutnya
default ini untuk statement falsenya mirip dengan else
*/

// penerapan percabangan switch case
/*
void main()
{
  int bulanke;

  printf("Inputkan bulan ke berapa : ");
  scanf("%d", &bulanke);

  switch (bulanke)
  {
  case 1:
    printf("\njanuari");
    break;
  case 2:
    printf("\nFebruari");
    break;
  default:
    printf("Angka yang anda inputkan salah");
    break;
  }
}
*/

/*Kapan menggunakan IF ELSE dan SWITCH CASE?
IF ELSE lebih umum digunakan dalam percabangan
jika pengecekan berupa range nilai, maka menggunakan IF ELSE
SWITCH CASE jika pengecekannya hanya nilai tunggal, maka menggunakan SWITCH CASE
*/